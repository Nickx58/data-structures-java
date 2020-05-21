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
    <label>
    Which Framework you prefer.
      <select name="framework">
        <option value="vue">Vue</option>
        <option value="react">React</option>
        <option value="angular">Angular</option>
      </select>
    </label>
    <button type="submit">
      Submit
    </button>
  </form>
`;

const form = document.forms.order;

function handleSubmit(e) {
  e.preventDefault();
  console.log(new FormData(e.target));
}

function handleFormData(e) {
  const entries = e.formData.entries();
  for (let entry of entries) {
    console.log(entry);
  }
}

form.addEventListener("submit", handleSubmit);
form.addEventListener("formdata", handleFormData);
