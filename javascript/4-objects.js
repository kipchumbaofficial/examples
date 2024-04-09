#!/usr/bin/node

// A function constructor

function createObject (name) {
    const obj = {};
    obj.name = name;
    obj.introduceSelf = function () {
        console.log(`Hello I am ${this.name}`);
    };
    return obj;
}

console.log(createObject('Victor'));
console.log(createObject('Hadijah'));
