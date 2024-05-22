#!/usr/bin/node

const fs = require("fs")

fs.readFile('7-read', 'utf-8', (err, data) => {
    if (err) {
        console.log(err);
    } else {
        console.log(data);
    }
});
