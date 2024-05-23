#!/usr/bin/node

const fs = require('fs')

let data = "Learn how to write to a file";

fs.writeFile('9-output', data, (err) => {
    if (err) {
        console.log(err);
    }
});
