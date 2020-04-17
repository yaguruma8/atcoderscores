// ABC055 B - Training Camp
'use strict';

function Main(input) {
    const tmp = input.trim().split('\n');
    const N = Number(tmp[0]);
    // console.log(N);

    const M = Math.pow(10, 9) + 7;

    let result = 1;
    for (let i = 1; i <= N; i++) {
        result = ((result % M) * (i % M)) % M;
    }
    console.log(result);
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));

// Main(`3`);
// Main(`10`);
// Main(`100000`);
