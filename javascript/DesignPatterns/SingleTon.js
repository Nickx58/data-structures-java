let singleTon = (function () {
  var instance;
  function createInstance() {
    var obj = new Object("I'm the instancec");
    return obj;
  }
  return {
    getInstance: function () {
      if (!instance) {
        instance = createInstance();
      }
      return instance;
    },
  };
})();

function run() {
  var instance1 = singleTon.getInstance();
  var instance2 = singleTon.getInstance();
  console.log("Same instance? " + (instance1 === instance2));
}

run();
