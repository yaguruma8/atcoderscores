'use strict';

function Main(input) {
  const tmp = input
    .trim()
    .split('\n')
    .map((v) => parseInt(v, 10));

  const a = tmp[0];
  const b = tmp[1];
  const h = tmp[2];

  const result = ((a + b) * h) / 2;

  console.log(result);
}

Main(require('fs').readFileSync('/dev/stdin', 'utf8'));
