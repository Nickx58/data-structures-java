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
    Which Pizza you prefer.
      <select name="pizza">
        <option value="cheesy">Chessy</option>
        <option value="farmhouse">Farm House</option>
        <option value="fourCheese">Four Cheese</option>
      </select>
    </label>
    <div>
    Choose Size
    <label>
      Small
      <input type="radio" name="size" value="small" checked>
    </label>
    <label>
      Medium
      <input type="radio" name="size" value="medium">
    </label>
    <label>
      Large
      <input type="radio" name="size" value="large">
    </label>
    <label>
      Quantity
      <input type="number" name="quantity" value="1">
    </label>
  </div>
    <button type="submit">
      Submit
    </button>
  </form>
`;

const form = document.forms.order;

function handleSubmit(e) {
  e.preventDefault();
  const formData = new FormData(e.target);

  // query string
  const asString = new URLSearchParams(formData).toString();
  console.log(asString);

  // json DATA
  const asJson = JSON.stringify(Object.fromEntries(formData));
  console.log(asJson);
}

form.addEventListener("submit", handleSubmit);
