const app = document.getElementById("app");

// Inserting DOM elements;

app.innerHTML = `
  <h1> DOM </h1>
  <div class="item"></div>
`;

let div = document.querySelector(".item");
console.log(div.parentNode);
console.log(div.parentElement);
console.log(div.closest("#app"));
console.log(div.closest("body"));
