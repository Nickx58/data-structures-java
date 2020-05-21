const app = document.getElementById("app");

// Inserting DOM elements;

app.innerHTML = `
  <h1> DOM </h1>
  <button>Add List</button>
  <ul id="list">
    <li>List 1</li>
    <li>List 2</li>
    <li>List 3</li>
    <li>List 4</li>
  </ul>
`;

const ul = document.querySelector("ul");
const button = document.querySelector("button");

function addListItem() {
  const list = document.querySelectorAll("li");
  let li = document.createElement("li");
  li.innerText = `List ${list.length + 1}`;
  ul.append(li);
}

function handleListClick(event) {
  if (event.target.nodeName.toLowerCase() !== "li") {
    return;
  }
  console.log(event.target.innerText);
}

ul.addEventListener("click", handleListClick);

button.addEventListener("click", addListItem);
