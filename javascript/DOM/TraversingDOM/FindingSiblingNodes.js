const app = document.getElementById("app");

// Inserting DOM elements;

app.innerHTML = `
  <h1> DOM </h1>
  <ul id="list">
    <li>1</li>
    <li>2</li>
    <li>3</li>
    <li>4</li>
  </ul>
`;

let list = document.querySelector("#list li");

// DOM Nodes
console.log(list.nextSibling);
console.log(list.previousSibling);

// Elements Nodes
console.log(list.nextElementSibling);
console.log(list.previousElementSibling);
