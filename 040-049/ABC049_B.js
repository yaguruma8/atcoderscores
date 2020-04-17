'use strict'

function Main(input) {
    const pix = input.split('\n');
    pix.shift();
    // const WH = tmp.shift().split(' ');
    // const W = Number(WH[0]);
    // const H = Number(WH[1]);
    // const pix = tmp;

    // console.log(W, H);
    // for (const v of pix) {
    //     console.log(v);
    // }

    const tatePix = [];
    pix.forEach(v => {
        tatePix.push(v);
        tatePix.push(v);
    });

    for (const v of tatePix) {
        console.log(v);
    }
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));
