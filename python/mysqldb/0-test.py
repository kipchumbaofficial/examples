#!/usr/bin/python3

import MySQLdb

try:
    db = MySQLdb.connect(host='LOCALHOST', user='kipchumba',
                         passwd='Guruji@1', db='test')
    cur = db.cursor()

    cur.execute("CREATE TABLE songs (id INT UNSIGNED PRIMARY KEY AUTO_INCREMENT, title TEXT NOT NULL)")

    songs = ('Skeleton', 'Sicko Mode', 'Houston Fonication')
    for song in songs:
        cur.execute("INSERT INTO songs (title) VALUES ('{}')".format(song))
        print("Auto increment ID: {}".format(cur.lastrowid))
except MySQLdb.Error as e:
    print(e)
