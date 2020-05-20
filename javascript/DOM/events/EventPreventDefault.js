const app = document.getElementById("app");

// Inserting DOM elements;

app.innerHTML = `
  <h1> DOM </h1>
  <form>
    <label>
      Email me
      <input type="email">
    </label>
    <label>
      I agree Term
      <input type="checkbox">
    </label>
  </form>
`;

const form = document.querySelector("form");
const input = form.querySelector("input[type=email]");
const checkbox = form.querySelector("input[type=checkbox]");

function handleSubmit(event) {
  event.preventDefault();
  console.log(input.value);
  console.log(checkbox.checked);
}

form.addEventListener("submit", handleSubmit);
