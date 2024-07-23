#!/usr/bin/env node

// Not es6 but worth learning
// The for loop

// Simple syntax;
for (let i = 0; i < 5; i++) {
    console.log("The number is ", i);
}

// You  can initiate many values in expreesion 1
// separated by commas

const cars = ['Volvo', 'BMW', 'Audi', 'Benz', 'Tesla']

for (let i = 0, len = cars.length, text = ""; i < len; i++) {
    text += cars[i] + " ";
    console.log('Dream cars: ', text);
}

// You can ommit expression 1
let i = 2;
let len = cars.length;
let text = "";

for (; i < len; i++) {
    text += cars[i] + " ";
    console.log('Best of Dream cars:', text);
}
