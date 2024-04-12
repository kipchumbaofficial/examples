#!/usr/bin/python3
'''Creating a connection to a database
'''
import sqlalchemy
import urllib.parse
import MySQLdb
from sqlalchemy import create_engine
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy import Column, Integer, String
from sqlalchemy.orm import sessionmaker

'''Credentials'''
user = 'kipchumba';
password = 'D#1@jklf0'
host = '127.0.0.1'
port = 3306
database = 'orm_test'
encoded_pass = urllib.parse.quote_plus(password)

'''Function to get connection
'''
def get_connection():
    return create_engine(
            url="mysql://{0}:{1}@{2}:{3}/{4}".format(
                user, encoded_pass, host, port, database
                )
            )


if __name__ == '__main__':
    try:
        '''Get the connection object'''
        engine = get_connection()
        print(f"Conction to {host} for {user} created successfully!")
        Session = sessionmaker(bind=engine)
        session = Session()
        Base = sqlalchemy.orm.declarative_base()
        class User(Base):
            __tablename__ = 'user'
            user_id = Column(Integer, autoincrement=True, primary_key=True)
            first_name = Column(String(50))
            last_name = Column(String(50))
            state = Column(String(50))

            def __repr__(self):
                return f"<User {self.user_id}: {self.first_name} {self.last_name}>"

        Base.metadata.create_all(engine)
        john = User(first_name='John', last_name='Doe', state='Nairobi')
        session.add(john)
        session.commit()
        session.close()
    except Exception as e:
        print("An error occcured:\n", e)
