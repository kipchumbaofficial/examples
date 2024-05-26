#!/usr/bin/python3
'''Blue print example
'''
from flask import Blueprint

ex_blueprint = Blueprint('ex_blueprint', __name__)

@ex_blueprint.route('/')
def index():
    return "This is an example blueprint"
