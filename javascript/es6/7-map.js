#!/usr/bin/env node
//Javascript map

//usin new Map()
const fruits = new Map([
    ['apples', 500],
    ['bananas', 300],
    ['oranges', 200],
]);

console.log('fruits:', fruits);

//usin set() method
//1. create a map
const fruitz = new Map();

//Set map value
fruitz.set('Grapes', 600)
fruitz.set('Mangoes', 400);
fruitz.set('Dragon Fruit', 100);
console.log('fruitz:', fruitz)

//get() method
console.log('Apples: ', fruits.get('apples'));
