#!/usr/bin/env node

// const key word
// Block Scope Example

function blockScopeExample() {
    const x = 20;
    if (true) {
        const x = 40;
        console.log(`x inside if block ${x}`);
    }
    console.log(`x outside = ${x}`);
}
blockScopeExample();

// Cannot be reassigned
const x = 4
try {
    x = 3;
} catch(error) {
    console.log('An error occured:', error.message);
}
