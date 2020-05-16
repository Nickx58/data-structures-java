let nums = [1, 2, 3, 4, 5];
let cars = [
  { name: "santro", price: "cheap" },
  { name: "city", price: "expensive" },
];

let doubledNumber = nums.map((num) => num * 2);
doubledNumber;

// Map polyfill

Array.prototype.myMap = function (cb) {
  let newArr = []; // since, we need to return an array
  for (let i = 0; i < this.length; i++) {
    newArr.push(cb(this[i], i, this)); // pushing currentValue, index, array
  }
  return newArr; // finally returning the array
};

let carsName = cars.myMap((car) => car.name);
console.log(carsName);
