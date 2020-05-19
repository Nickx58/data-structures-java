const app = document.getElementById("app");

// Inserting DOM elements;

app.innerHTML = `
  <h1> DOM </h1>
  <ul id="list">
    <li>Air</li>
    <li>Earth</li>
    <li>Water</li>
    <li>Fire</li>
  </ul>
`;

let listItems = document.querySelectorAll("#list li");
console.log(listItems);

// using for Loop
for (let i = 0; i < listItems.length; i++) {
  console.log(listItems[i]);
}

// using for Of loop
for (let item of listItems) {
  console.log(item);
}

// using spread operators and then forEach loop
[...listItems].forEach((item) => console.log(item));

// converting them into Array and then using forEach Loop
Array.from(listItems).forEach((item) => console.log(item));
