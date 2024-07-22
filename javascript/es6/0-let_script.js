#!/usr/bin/env node

// BlockScope example

function blockScopeExample() {
    let x = 10;
    if (true) {
        let x = 20;
        console.log(`X inside if = ${x}`);
    }
    console.log(`X outside = ${x}`);
}
blockScopeExample();

// Reasigning is allowed
let y = 9
y = 19;
console.log(`Initial value of y = 9 but y = ${y} now`);
