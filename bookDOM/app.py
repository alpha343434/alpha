import requests
from flask import Flask, render_template, request, redirect, url_for, flash, session
import random
from flask_login import LoginManager, UserMixin, login_user, login_required, logout_user
import os
import sqlite3

app = Flask(__name__)
app.secret_key= "a_random_secret_key"

login_manager= LoginManager()
login_manager.init_app(app)
login_manager.login_view= "login"

class User(UserMixin):
    def __init__(self,id):
        self.id = id

@login_manager.user_loader
def load_user(user_id):
    return User(user_id)

def get_db_connection():
    conn = sqlite3.connect("users.db")
    conn.row_factory = sqlite3.Row
    return conn

def get_random_book():
    api_key = 'AIzaSyBFqNxDzEaNg5voVK1zqGIFD7AcWJ9MOXM' 
    response = requests.get(f'https://www.googleapis.com/books/v1/volumes?q=novel&key={api_key}')
    if response.status_code == 200:
        books = response.json().get('items', [])
        if books:
            random_book = random.choice(books)
            title = random_book['volumeInfo'].get('title', 'No Title')
            authors = random_book['volumeInfo'].get('authors', ['Unknown'])
            return title, ', '.join(authors)
        else:
            return "No books found", "N/A"
    else:
        return "Error fetching book", "Unknown"

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/recommendation", methods=["POST"])
def recommendation():
    book_title, book_author = get_random_book()
    return render_template("random.html", book_title=book_title, book_author=book_author)

@app.route("/register", methods=["GET","POST"])
def register():
    if request.method== "POST":
        username= request.form["username"]
        password= request.form["password"]

        conn= get_db_connection()
        conn.execute("INSERT INTO users (username,password) VALUES (?,?)", (username,password))
        conn.commit()
        conn.close()
        return redirect(url_for("login"))
    
    return render_template("register.html")

@app.route("/login", methods=["GET","POST"])
def login():
    if request.method== "POST":
        username= request.form["username"]
        password= request.form["password"]

        conn= get_db_connection()
        user=conn.execute("SELECT * FROM users WHERE username=? AND password=?", (username,password)).fetchone()
        conn.close()
        
        if user:
            user_id= user["id"]
            login_user(User(user_id))
            return redirect(url_for("index"))
    
    return render_template("login.html")

@app.route('/logout')
@login_required
def logout():
    logout_user()
    return redirect(url_for('index'))

if __name__ == '__main__':
    app.run(debug=True)
