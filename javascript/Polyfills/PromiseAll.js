function allPromise(promises) {
  // return a new promise
  return new Promise((resolve, reject) => {
    // check promises count
    var promiseCount = promises.length;
    var promisedData = [];
    var settledCount = 0;

    // check the status

    promises.forEach((promise, i) => {
      promise
        .then((data) => {
          // pushed in the array and increment count
          promisedData[i] = data;
          settledCount++;
          // check the promise count and settledCount
          if (settledCount === promiseCount) {
            resolve(promisedData);
          }
        })
        .catch((error) => {
          // if promise fail then reject
          reject(error);
        });
    });
  });
}

function fn1() {
  return new Promise((res) => {
    setTimeout(() => {
      res(10);
    }, 5000);
  });
}

function fn2() {
  return new Promise((res) => {
    setTimeout(() => {
      res(20);
    }, 1000);
  });
}

allPromise([fn1(), fn2()]).then((response) => {
  console.log(response);
});
