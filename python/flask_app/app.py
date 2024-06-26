#!/usr/bin/python3
"""The flask app
    contains:
        Routes to render the templates
"""
from flask import Flask, render_template
from datetime import datetime

app = Flask(__name__)


@app.route('/', strict_slashes=False)
def index():
    """This is the home page"""
    return render_template('index.html', time=datetime.now())


@app.route('/about', strict_slashes=False)
def about():
    """About page"""
    return render_template('about.html')


@app.route('/comments', strict_slashes=False)
def comments():
    comments = [
            'This is the First comment',
            'This is the Second comment',
            'This is the Third comment',
            'This is the Forth comment'
            ]
    return render_template('comments.html', comments=comments)


if __name__ == "__main__":
    app.run(debug=True)
