/*
 * Currying in javascript using bind and closures method
 */

let mutliplyByBind = function (x, y) {
  console.log(x * y);
};

let multiplyByClosure = function (x) {
  return function (y) {
    console.log(x * y);
  };
};

let multiplyByTwoBindWay = mutliplyByBind.bind(this, 2);
multiplyByTwoBindWay(3);

let multiplyByTwoClosureWay = multiplyByClosure(2);
multiplyByTwoClosureWay(3);
