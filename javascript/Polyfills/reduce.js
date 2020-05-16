// reduce examples
let numbers = [10, 20, 30];
let primaryColors = [{ color: "red" }, { color: "blue" }, { color: "black" }];

let sum = numbers.reduce(function (sum, number) {
  return sum + number;
}, 0);

console.log(sum); // 60

let colors = primaryColors.reduce(function (prev, color) {
  prev.push(color.color);
  return prev;
}, []);

console.log(colors); // ["red","blue","black"];

// reduce polyfill
Array.prototype.ourReduce = function (callback, initialValue) {
  var accumulator = initialValue === undefined ? undefined : initialValue;
  for (let i = 0; i < this.length; i++) {
    if (accumulator !== undefined) {
      accumulator = callback.call(undefined, accumulator, this[i], i, this);
    } else {
      accumulator = this[i];
    }
  }
  return accumulator;
};
