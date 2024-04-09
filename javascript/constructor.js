#!/usr/bin/node

// Using constructors

function Person(name) {
    this.name = name;
    this.introduceSelf = function () {
        console.log(`Hello i am ${this.name}`);
    }
}

console.log(new Person('Hadija'));
console.log(new Person('Victor'));
const boy = new Person('Victor');
const girl = new Person('Hadija');
girl.introduceSelf();
boy.introduceSelf();
