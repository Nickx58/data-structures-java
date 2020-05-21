const app = document.getElementById("app");

// Inserting DOM elements;

app.innerHTML = `
  <h1> DOM </h1>
  <form name="order">
      <label>
        IS Joining
        <input type="checkbox" name="Joining">
      </label>
  </form>
`;

const checkBox = document.querySelector("input");

// valuable property
checkBox.checked = false;

// events
checkBox.addEventListener("change", () => {
  console.log(checkBox.checked);
});
