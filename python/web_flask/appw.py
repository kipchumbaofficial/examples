from flask import Flask, request, jsonify
from flask_sqlalchemy import SQLAlchemy
import openai

app = Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI'] = 'postgresql://user:password@localhost/dbname'
db = SQLAlchemy(app)

# Model Definitions
class User(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    username = db.Column(db.String(80), unique=True, nullable=False)
    email = db.Column(db.String(120), unique=True, nullable=False)
    password = db.Column(db.String(120), nullable=False)

class ConstitutionSection(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    title = db.Column(db.String, nullable=False)
    content = db.Column(db.Text, nullable=False)
    section_number = db.Column(db.Integer, nullable=False)

# User Registration
@app.route('/api/auth/register', methods=['POST'])
def register():
    data = request.json
    new_user = User(username=data['username'], email=data['email'], password=data['password'])
    db.session.add(new_user)
    db.session.commit()
    return jsonify({"message": "User registered successfully", "user_id": new_user.id})

# User Login
@app.route('/api/auth/login', methods=['POST'])
def login():
    data = request.json
    user = User.query.filter_by(username=data['username']).first()
    if user and user.password == data['password']:
        token = generate_token(user.id)
        return jsonify({"token": token})
    return jsonify({"message": "Invalid credentials"}), 401

# User Information
@app.route('/api/user', methods=['GET'])
def get_user():
    token = request.headers.get('Authorization')
    user_id = decode_token(token)
    user = User.query.get(user_id)
    return jsonify({"id": user.id, "username": user.username, "email": user.email})

# Chat Query
@app.route('/api/chat/query', methods=['POST'])
def chat_query():
    data = request.json
    response = Chatbot().generate_response(data['query'], data['userId'])
    return jsonify({"response": response})

# Chat History
@app.route('/api/chat/history', methods=['GET'])
def chat_history():
    token = request.headers.get('Authorization')
    user_id = decode_token(token)
    chats = Chat.query.filter_by(user_id=user_id).all()
    return jsonify([{"id": chat.id, "query": chat.query, "response": chat.response, "timestamp": chat.timestamp} for chat in chats])

# Constitution Search
@app.route('/api/constitution/search', methods=['GET'])
def search_constitution():
    query = request.args.get('query')
    results = ConstitutionSearcher().search(query)
    return jsonify([{"section": result.title, "content": result.content} for result in results])

if __name__ == '__main__':
    app.run(debug=True)

