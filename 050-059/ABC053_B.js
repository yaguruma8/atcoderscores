// ABC053 B - A to Z String
'use strict'
function Main(input) {
    const tmp = input.trim().split('\n')
    const str = tmp[0]
    // console.log(str);

    const begin = str.indexOf('A')
    const end = str.lastIndexOf('Z')

    console.log(end - begin + 1);

}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));

// Main(`QWERTYASDFZXCV`); // 5
// Main(`ZABCZ`);  //4
// Main(`HASFJGHOGAKZZFEGA`);  // 12