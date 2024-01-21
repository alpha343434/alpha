from flask import Flask, render_template, request

app= Flask(__name__)

@app.route("/", methods=["GET","POST"])
def index():
    if request.method=="GET":
        return render_template("index.html")
    else:
        print("form submitted")
        animal= request.form.get("animal")
        return render_template("animal.html",animal=animal)
