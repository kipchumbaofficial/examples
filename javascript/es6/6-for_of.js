#!/usr/bin/env node
//The for/of loop

//Looping through an array
const cars = ['Volvo', 'BMW', 'Benz', 'Tesla']
let text = '';

for (let car of cars) {
    text += car + " ";
}
console.log(text);

// Looping through a string
let language = 'JavaScript';

for (let character of language) {
    console.log(character);
}
