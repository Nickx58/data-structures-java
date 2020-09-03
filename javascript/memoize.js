function memoize(fn) {
  let cache = {};
  function inner(input) {
    if (cache[input]) {
      return cache[input];
    } else {
      const val = fn(input);
      cache[input] = val;
      return val;
    }
  }
  return inner;
}
