// ABC056 B - NarrowRectanglesEasy;
'use strict';

function Main(input) {
    const tmp = input.trim().split('\n')[0].split(' ');
    const W = Number(tmp[0]);
    const a = Number(tmp[1]);
    const b = Number(tmp[2]);
    // console.log(W, a, b);

    let result;
    result = Math.abs(a - b) - W;
    if (result < 0) {
        result = 0;
    }
    console.log(result);
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));

// Main(`3 2 6`); // 1
// Main(`3 1 3`); // 0
// Main(`5 10 1`); // 4
