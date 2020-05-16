// filter polyfill

let cars = [
  { name: "santro", price: "cheap", quantity: 10 },
  { name: "city", price: "expensive", quantity: 12 },
  { name: "maruti", price: "cheap", quantity: 2 },
  { name: "mg", price: "expensive", quantity: 5 },
];

let availableCar = cars.filter((car) => car.quantity >= 10);

Array.prototype.myFilter = function (callback, context) {
  let arr = [];
  for (var i = 0; i < this.length; i++) {
    if (callback.call(context, this[i], i, this)) {
      arr.push(this[i]);
    }
  }
  return arr;
};

let newCar = cars.myFilter((car) => car.quantity >= 10);
