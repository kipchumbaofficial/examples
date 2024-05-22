#!/usr/bin/node

const fs = require('fs')

fs.readFile('7-read', 'utf-8', (err, data) => {
    if (err) {
        console.log(err);
    }
    else {
        let splitString = data.split(' ');
        let firstWord = splitString[0];
        console.log(
            firstWord == 'hello'
            ? 'Sample text start with hello'
            : 'Sample text does not with hello'
        );
    }
});
