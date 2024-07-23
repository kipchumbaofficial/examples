#!/usr/bin/env node

//The spread operator

const q1 = ['Jan', 'Feb', 'March'];
const q2 = ['April', 'May', 'June'];
const q3 = ['July', 'Aug', 'Sep'];
const q4 = ['Oct', 'Nov', 'Dec']

const year = [...q1, ...q2, ...q3, ...q4]

console.log(year);

// example 2:
const numbers = [10, 20, 30, 40, 70, 89, 100]

let max = Math.max(...numbers)
let maxValue = Math.max(numbers)

console.log('Spread:', max)
console.log('Normal:', maxValue)
