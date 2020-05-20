function inner() {
  var a = 10;
  return function outer(b) {
    console.log(a * b);
  };
}

let multiplier = inner();
multiplier(5);

// closers Async example

function asyncClosures() {
  for (var i = 0; i < 4; i++) {
    (function () {
      var current = i;
      setTimeout(function () {
        console.log(current);
      }, 1000);
    })();
  }
}

asyncClosures();
