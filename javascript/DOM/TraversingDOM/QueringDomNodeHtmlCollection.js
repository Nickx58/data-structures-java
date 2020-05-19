const app = document.getElementById("app");

// Inserting DOM elements;

app.innerHTML = `
  <h1> DOM </h1>
  <ul id="list">
  </ul>
`;

let fragment = document.createDocumentFragment();
const data = ["water", "Earth", "fire"];

data.forEach((item) => {
  let li = document.createElement("li");
  li.innerText = item;
  li.className = "list-items";
  fragment.append(li);
});

// getElementByID return html node
let ul = document.getElementById("list");
ul.append(fragment);

// getElementsByTagName return HTML Collections

let liTagName = ul.getElementsByTagName("li");
console.log(liTagName);

// getElementByClassName return HTML collections too

let liByClassName = ul.getElementsByClassName("list-items");
console.log(liByClassName);

// crate li tag and append in the collection

let newLi = document.createElement("li");
newLi.innerText = "Air";
newLi.className = "list-items";
ul.append(newLi);

console.log(liTagName);
console.log(liByClassName);
