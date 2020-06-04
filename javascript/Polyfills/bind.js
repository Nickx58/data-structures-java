let name = {
  firstName: "Nikhil",
  lastName: "Sharma",
};

let print = function (homeTown, ind) {
  console.log(
    this.firstName + " " + this.lastName + " " + homeTown + " " + ind
  );
};

let printName = print.bind(name, "Amritsar");
printName("Ind");

Function.prototype.myBind = function (...args) {
  let obj = this;
  let params = args.slice(1);
  return function (...args2) {
    obj.apply(args[0], [...params, ...args2]);
  };
};

let pn = print.myBind(name, "ASr");
pn("ind");
