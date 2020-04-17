// ABC054 B - Template Matching
'use strict'

function Main(input) {
    const tmp = input.trim().split('\n');
    const NM = tmp[0].split(' ');
    const N = Number(NM[0])
    const M = Number(NM[1])
    const AB = tmp.splice(1);
    const A = AB.slice(0, N);
    const B = AB.slice(-M);
    // console.log(N, M, A, B);

    const joinB = B.join('');
    for (let y = 0; y < (N - M + 1); y++) {
        for (let x = 0; x < (N - M + 1); x++) {
            if (A[y][x] === joinB[0]) {
                // joinAを作る
                let joinA = '';
                for (let i = 0; i < M; i++) {
                    joinA += A[y + i].slice(x, x + M)
                }
                // joinAとjoinBが同じならYes
                if (joinA === joinB) {
                    console.log('Yes');
                    return;
                }
            }
        }
    }
    console.log('No');
    return;

    // let joinA = A[0].slice(0, 2);
    // joinA += A[1].slice(0, 2);
    
    // console.log(joinA, joinB);
    // joinA = A[0].slice(1, 3);
    // joinA += A[1].slice(1, 3);
    // console.log(joinA, joinB);

    // joinA = A[1].slice(0, 2);
    // joinA += A[2].slice(0, 2);
    // console.log(joinA, joinB)

}


Main(require('fs').readFileSync('/dev/stdin', 'utf8'));


// Main(`3 2
// #.#
// .#.
// #.#
// #.
// .#`);   // Yes
// Main(`4 1
// ....
// ....
// ....
// ....
// #`);    // No