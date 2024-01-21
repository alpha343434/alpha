import os

from cs50 import SQL
from flask import Flask, flash, redirect, render_template, request, session
from flask_session import Session
from werkzeug.security import check_password_hash, generate_password_hash
from datetime import datetime

from helpers import apology, login_required, lookup, usd

app = Flask(__name__)

app.jinja_env.filters["usd"] = usd

app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)

db = SQL("sqlite:///finance.db")


@app.after_request
def after_request(response):
    """Ensure responses aren't cached"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


@app.route("/", methods=["GET"])
@login_required
def index():
    """Show portfolio of stocks"""
    user_id = session.get("user_id")

    rows = db.execute(
        "SELECT symbol, name, total_shares FROM portfolio WHERE user_id = ?", user_id
    )

    cash_row = db.execute("SELECT cash FROM users WHERE id = ?", user_id)
    cash = cash_row[0]["cash"]

    sum = 0
    TOTAL = 0

    for row in rows:
        look = lookup(row["symbol"])

        row["symbol"] = look["symbol"]
        row["name"] = look["name"]
        row["price"] = look["price"]

        row["total"] = row["price"] * row["total_shares"]

        sum += row["total"]

    TOTAL = cash + sum

    return render_template("index.html", rows=rows, cash=cash, TOTAL=TOTAL)


@app.route("/buy", methods=["GET", "POST"])
@login_required
def buy():
    """Buy shares of stock"""
    if request.method == "GET":
        return render_template("buy.html")
    else:
        symbol = request.form.get("symbol")
        shares = request.form.get("shares")
        if symbol == "":
            return apology("MISSING SYMBOL")
        elif shares.isdigit() == False:
            return apology("INVALID NUMBER OF SHARES")
        else:
            look = lookup(symbol)
            if look == None:
                return apology("INVALID SYMBOL")
            else:
                symbol = look["symbol"]
                name = look["name"]
                price = look["price"]

                user_id = session.get("user_id")
                cash = db.execute("SELECT cash FROM users WHERE id = ?", user_id)

                total_amount = float(shares) * price

                if float(cash[0]["cash"]) >= total_amount:
                    new_cash = float(cash[0]["cash"]) - total_amount

                    db.execute(
                        "INSERT INTO transactions(user_id, symbol,name,type,shares,price,transaction_date) VALUES (?,?,?,?,?,?,?)",
                        user_id,
                        symbol,
                        name,
                        "buy",
                        shares,
                        price,
                        datetime.now(),
                    )

                    row = db.execute(
                        "SELECT symbol FROM portfolio WHERE user_id = ? AND symbol = ?",
                        user_id,
                        symbol,
                    )

                    if len(row) != 1:
                        db.execute(
                            "INSERT INTO portfolio(user_id, symbol,name, total_shares) VALUES (?,?,?,?)",
                            user_id,
                            symbol,
                            name,
                            shares,
                        )
                    else:
                        row = db.execute(
                            "SELECT total_shares FROM portfolio WHERE user_id = ? AND symbol = ?",
                            user_id,
                            symbol,
                        )
                        old_shares = row[0]["total_shares"]
                        new_shares = old_shares + int(shares)
                        db.execute(
                            "UPDATE portfolio SET total_shares = ? WHERE user_id = ? AND symbol = ?",
                            new_shares,
                            user_id,
                            symbol,
                        )

                    db.execute(
                        "UPDATE users SET cash = ? WHERE id = ?", new_cash, user_id
                    )

                    flash("Bought!", "success")
                    return redirect("/")
                else:
                    return apology("CAN'T AFFORD")


@app.route("/history", methods=["GET"])
@login_required
def history():
    """Show history of transactions"""
    user_id = session.get("user_id")

    stocks = db.execute(
        "SELECT symbol,shares,price,transaction_date FROM transactions WHERE user_id = ?",
        user_id,
    )

    return render_template("history.html", stocks=stocks)


@app.route("/login", methods=["GET", "POST"])
def login():
    """Log user in"""

    session.clear()

    if request.method == "POST":
        if not request.form.get("username"):
            return apology("must provide username", 403)

        elif not request.form.get("password"):
            return apology("must provide password", 403)

        rows = db.execute(
            "SELECT * FROM users WHERE username = ?", request.form.get("username")
        )

        if len(rows) != 1 or not check_password_hash(
            rows[0]["hash"], request.form.get("password")
        ):
            return apology("invalid username and/or password", 403)

        session["user_id"] = rows[0]["id"]

        return redirect("/")

    else:
        return render_template("login.html")


@app.route("/logout")
def logout():
    """Log user out"""

    session.clear()

    return redirect("/")


@app.route("/quote", methods=["GET", "POST"])
@login_required
def quote():
    """Get stock quote."""
    if request.method == "GET":
        return render_template("quote.html")
    else:

        symbol = request.form.get("symbol")

        if symbol == "":
            return apology("MISSING SYMBOL")
        else:
            quote = lookup(symbol)

            if quote == None:
                return apology("INVALID SYMBOL")
            else:
                return render_template(
                    "quoted.html",
                    name=quote["name"],
                    symbol=quote["symbol"],
                    price=usd(quote["price"]),
                )


@app.route("/register", methods=["GET", "POST"])
def register():
    """Register user"""
    if request.method == "GET":
        return render_template("register.html")
    else:
        username = request.form.get("username")
        password = request.form.get("password")
        confirmation = request.form.get("confirmation")

        existing = db.execute(
            "SELECT username FROM users WHERE username = ?", username
        )

        if username == "" or existing:
            return apology("Username is not available")
        elif password == "":
            return apology("MISSING PASSWORD")

        elif confirmation == "" or (password != confirmation):
            return apology("PASSWORDS DON'T MATCH")

        password_hash = generate_password_hash(
            password, method="pbkdf2", salt_length=16
        )

        result = db.execute(
            "INSERT INTO users(username, hash) VALUES (?, ?)", username, password_hash
        )

        if result:
            user_data = db.execute("SELECT id FROM users WHERE username = ?", username)
            if user_data:
                user_id = user_data[0]["id"]
                session["user_id"] = user_id

                return redirect("/")

        return apology("Registration failed")


@app.route("/sell", methods=["GET", "POST"])
@login_required
def sell():
    """Sell shares of stock"""
    user_id = session.get("user_id")

    quotes = db.execute("SELECT symbol FROM portfolio WHERE user_id = ? ", user_id)
    if request.method == "GET":
        return render_template("sell.html", quotes=quotes)
    else:

        symbol = request.form.get("symbol")
        look = lookup(symbol)
        price = look["price"]
        name = look["name"]
        shares_sell = request.form.get("shares")

        if shares_sell.isdigit() == False:
            return apology("INVALID NUMBER OF SHARES")

        rows = db.execute(
            "SELECT total_shares FROM portfolio WHERE user_id = ? and symbol = ?",
            user_id,
            symbol,
        )
        total_shares = rows[0]["total_shares"]

        if int(shares_sell) > total_shares:
            return apology("TOO MANY SHARES")
        else:
            new_shares = total_shares - int(shares_sell)

            if new_shares == 0:
                db.execute(
                    "DELETE FROM portfolio WHERE user_id =? AND symbol =?",
                    user_id,
                    symbol,
                )

            db.execute(
                "UPDATE portfolio SET total_shares = ? WHERE user_id = ? and symbol = ?",
                new_shares,
                user_id,
                symbol,
            )

            cash = db.execute("SELECT cash FROM users WHERE id = ?", user_id)
            new_cash = float(cash[0]["cash"]) - int(shares_sell) * price
            db.execute(
                "UPDATE portfolio SET total_shares = ? WHERE user_id = ? and symbol = ?",
                new_shares,
                user_id,
                symbol,
            )

            db.execute(
                "INSERT INTO transactions(user_id, symbol,name,type,shares,price,transaction_date) VALUES (?,?,?,?,?,?,?)",
                user_id,
                symbol,
                name,
                "sell",
                -int(shares_sell),
                price,
                datetime.now(),
            )

            flash("Sold!", "success")
            return redirect("/")
