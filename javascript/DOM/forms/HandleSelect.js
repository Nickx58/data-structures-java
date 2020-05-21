const app = document.getElementById("app");

// Inserting DOM elements;

app.innerHTML = `
  <h1> DOM </h1>
  <form name="order">
  <select name="framwork">
    <option value="vue">Vue</option>
    <option value="angular">Angular</option>
    <option value="react">React</option>
  </select>
  </form>
`;

const select = document.querySelector("select");

// selected Value
select.value = "react";

// selected Index;
const id = 2;
select.selectedIndex = id;

// selected DOM elements
console.log(select.options[select.selectedIndex]);

// events
select.addEventListener("change", () => {
  console.log(select.value);
});

// add new Options
const option = document.createElement("option");
option.value = "jquery";
option.text = "Jquery";
select.add(option, 1);
