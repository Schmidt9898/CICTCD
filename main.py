# main.py
from fastapi import FastAPI
from fastapi.responses import HTMLResponse

app = FastAPI()

@app.get("/", response_class=HTMLResponse)
def welcome():
    with open("templates/welcome.html", "r", encoding="utf-8") as f:
        html_content = f.read()
    return html_content