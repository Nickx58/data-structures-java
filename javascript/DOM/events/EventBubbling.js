const app = document.getElementById("app");

// Inserting DOM elements;

app.innerHTML = `
  <h1> DOM </h1>
  <div class="one">
    <div class="two">
      <button class="three" type="button">Click Me</button>
    </div>
  </div>
`;

const one = document.querySelector(".one");
const two = document.querySelector(".two");
const three = document.querySelector(".three");

function handleClick(event) {
  event.stopPropagation();
  console.log(event.target);
}

one.addEventListener("click", handleClick);
two.addEventListener("click", handleClick);
three.addEventListener("click", handleClick);
