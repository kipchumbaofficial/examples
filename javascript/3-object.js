#!/usr/bin/node
// Basic objec in js
const person = {
    name: ['Victor', 'Kipchumba'],
    age: 23,
    bio: function () {
        console.log(`${this.name[0]} ${this.name[1]} is ${this.age} years old`);
    },
    introduceSelf: function () {
        console.log(`Hi i am ${this.name[0]}`);
    }
};
console.log(person);
