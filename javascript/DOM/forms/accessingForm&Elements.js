import "../assets/css/style.css";

const app = document.getElementById("app");

// Inserting DOM elements;

app.innerHTML = `
  <h1> DOM </h1>
  <form name="order">
    <label>
      Your Name:
      <input type="text" name="fullName">
    </label>
  </form>
`;

const form = document.forms.order;
const input = form.elements.fullName;

function handleInput(event) {
  console.log(event.target.value);
}

input.addEventListener("change", handleInput);
console.log(form, input);
