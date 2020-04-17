'use strict'

function Main(input) {
    const tmp = input.split('\n')[0].split(' ');
    const a = Number(tmp[0]);
    const b = Number(tmp[1]);
    const x = Number(tmp[2]);

    let result = Math.floor(b / x) - Math.floor(a / x);
    if (a % x === 0) {
        result += 1;
    }
    // 10^18まで対応できない。調べる
    console.log(result);

}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));