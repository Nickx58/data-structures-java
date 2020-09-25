const arr = [0, 1, 2, 3, 4, 5, 6];

const minMax = arr.reduce((acc, value) => {
  acc[0] = acc[0] === undefined || value < acc[0] ? value : acc[0];
  acc[1] = acc[1] === undefined || value > acc[1] ? value : acc[1];
  return acc;
}, []);

console.log(minMax);
