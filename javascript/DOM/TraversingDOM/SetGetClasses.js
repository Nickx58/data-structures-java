const app = document.getElementById("app");

// Inserting DOM elements;

app.innerHTML = `
  <h1> DOM </h1>
  <button type="button" class="one two">Clicke me</button>
`;

const button = document.querySelector("button");

// old way
// have to take care of the string concat if we dont use the concat it will remove
// the existing classes and also add space
button.className += " three";

// new way classList api
button.classList.add("four");
button.classList.remove("three");

// toggle API
// it will check if the class is not there it will add
// if class is already present then it will remove that class
button.classList.toggle("five");
button.classList.replace("two", "six");
console.log(button);
