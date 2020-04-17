'use strict'

function Main(input) {
    const S = input.trim().split('\n')
    const NL = S.shift()

    console.log(S.sort().join(''));

}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));