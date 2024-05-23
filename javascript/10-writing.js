#!/usr/bin/node

const fs = require('fs')

let data = '\nUsing file system'

fs.appendFile('9-output', data, (err) => {
    if (err) {
        console.log(err);
    }
});
