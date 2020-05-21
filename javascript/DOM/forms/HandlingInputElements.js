const app = document.getElementById("app");

// Inserting DOM elements;

app.innerHTML = `
  <h1> DOM </h1>
  <form name="order">
    <label>
      Your Name:
      <input type="text" name="myInput">
    </label>
  </form>
`;

const input = document.querySelector("input");

// Useful Properties
input.value = "Holo Amazon!!";
// input.disabled = true;
// input.readOnly = true;

// some useful events;

input.addEventListener("focus", () => console.log("Focus"));
input.addEventListener("blur", () => console.log("Blur"));
input.addEventListener("input", () => console.log("input"));
input.addEventListener("change", () => console.log("change"));

// methdos;
input.focus();
