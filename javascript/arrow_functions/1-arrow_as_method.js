#!/usr/bin/env node
//Arrow functions as methods is not advised

"use strict";

const obj = {
    i: 10,
    b: () => console.log(this.i, this),
    c() {
        console.log(this.i, this);
    },
};

obj.b();
obj.c();
