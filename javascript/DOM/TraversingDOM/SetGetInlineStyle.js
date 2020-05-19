const app = document.getElementById("app");

// Inserting DOM elements;

app.innerHTML = `
  <h1> DOM </h1>
  <button type="button">Clicke me</button>
`;

const button = document.querySelector("button");

// style using css text
button.style.cssText = "padding:20px; margin:10px 0px; font-size: 20px";
// direct property access
button.style.fontSize = "10px";
console.log(button.style);
