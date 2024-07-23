#!/usr/bin/env node
// Object Destructuring

const person = {
    firstName: 'Kipchumba',
    lastName: 'Victor',
    age: 23,
    }

let { firstName, age } = person;

console.log(`My name is ${firstName}, I am ${age}`);

