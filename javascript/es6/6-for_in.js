#!/usr/bin/env node
// The for in loop

//object syntax
const person = {fname:"John", lname:"Doe", age:25};

for (let key in person) {
    console.log(person[key]);
}

//Array syntax
//Not advisable to use
const numbers = [49, 4, 9, 16, 25]

for (let idx in numbers) {
    console.log(numbers[idx]);
}

//Array.forEach

numbers.forEach(myfunc = value => {
    console.log('Value: ', value);
});
