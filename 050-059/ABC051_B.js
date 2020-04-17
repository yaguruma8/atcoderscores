'use strict'

function Main(input) {
    const tmp = input.trim().split('\n')[0].split(' ');
    const K = Number(tmp[0]);
    const S = Number(tmp[1]);
    console.log(K, S);

    let result = 0;
    for (let x = 0; x <= K; x++) {
        for (let y = 0; y <= K; y++) {
            const z = S - x - y;
            if (z >= 0 && z <= K) {
                result++;
            }
        }
    }
    console.log(result);
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));