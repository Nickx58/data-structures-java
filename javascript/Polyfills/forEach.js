// For Each polyfill

let names = ["react", "vue", "angular", "Node", "typescript"];

names.forEach((name) => console.log(name));

names.forEach(function (name) {
  console.log(name);
});

function log(name) {
  console.log(name);
}
names.forEach(log);

// writing own forEach with any

Array.prototype.myForEach = function (callback) {
  // callback here is the callback function
  // which actual .forEach() function accepts
  for (var i = 0; i < this.length; i++) {
    callback(this[i], i, this); // currentValue, index, array
  }
};

names.myForEach((name) => console.log(name));
