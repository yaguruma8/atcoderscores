// ABC052 B - Increment Decrement
'use strict'

function Main(input) {
    const tmp = input.trim().split('\n');
    const N = Number(tmp[0])
    const S = tmp[1].split('')
    // console.log(N, S);

    let result = 0;
    let x = 0;
    for (const v of S) {
        if (v === 'I') {
            x++;
        } else if (v === 'D') {
            x--;
        }
        if (x > result) {
            result = x;
        }
    }
    
    console.log(result);
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));