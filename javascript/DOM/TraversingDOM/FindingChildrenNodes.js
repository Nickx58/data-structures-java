import "../assets/css/style.css";

const app = document.getElementById("app");

// Inserting DOM elements;

app.innerHTML = `
  <h1> DOM </h1>
  <ul id="list">
    <li>Earth</li>
    <li>Fire</li>
    <li>Air</li>
    <li>Water</li>
  </ul>
`;

let list = document.querySelector("#list");

// QuerySelect ALl gives Node list
// let li = list.querySelectorAll("li");

// Children will give htmlCollection
console.log(list.children);

// Give Node list
console.log(list.childNodes);

console.log(list.firstElementChild);
console.log(list.lastElementChild);

// prefer to use children, firstElement and lastElement child
