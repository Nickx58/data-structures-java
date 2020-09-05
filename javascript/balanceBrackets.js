let balanceBrackets = function (str) {
  let stack = [];
  let map = {
    "(": ")",
    "{": "}",
    "[": "]",
  };

  // check for the opening character
  for (let i = 0; i < str.length; i++) {
    if (str[i] === "(" || str[i] === "{" || str[i] === "[") {
      // then push in the stack;
      stack.push(str[i]);
    } else {
      if (str[i] === ")" || str[i] === "}" || str[i] === "]") {
        let poped = stack.pop();

        if (str[i] !== map[poped]) {
          return false;
        }
      }
    } // if it is closing bracket pop from the stack
  }
  // if stack is not empty
  // brackets are not balanced
  if (stack.length !== 0) {
    return false;
  }
  return true;
};

if (balanceBrackets("ab[cd]ef[gh{ij}]kl(mn)op")) {
  console.log("Balanced");
} else {
  console.log("Not Balanced");
}
