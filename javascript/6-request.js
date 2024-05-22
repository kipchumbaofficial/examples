#!/usr/bin/node

// Example of using request objects

const request = new Request("https://www.mozilla.org/favicon.ico");

const url = request.url;
console.log(url);
