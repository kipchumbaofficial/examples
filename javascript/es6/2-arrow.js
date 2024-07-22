#!/usr/bin/env node

//arrow functions
//Basic syntax

//trditional functions
const traditionalFunc = function(x, y) {
    return x + y;
}

// Arrow function
const arrowFunc = (x, y) => x + y;

console.log(`traditional: ${traditionalFunc(2, 3)}`)
console.log(`Arrow: ${arrowFunc(2, 3)}`)

//Implicit return
const square = x => x * x;
console.log(`Square of 4 = ${square(4)}`)

//No 'this' binding
function Person() {
    this.age = 0;

    setInterval(() => {
        this.age++;
        if (this.age <= 18) {
            console.log(this.age);
        } 
    }, 1000);
}
const person = new Person();
