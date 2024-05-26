#!/usr/bin/python3
'''Simple python app
'''
from flask import Flask
from ex_blueprint import ex_blueprint

app = Flask(__name__)
app.register_blueprint(ex_blueprint)


if __name__ == "__main__":
    app.run(debug=True)
