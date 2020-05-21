const app = document.getElementById("app");

// Inserting DOM elements;

app.innerHTML = `
  <h1> DOM </h1>
  <form name="order">
    <div class="container">
      <label>
        Red
        <input type="radio" name="color" value="red" checked>
      </label>
      <label>
        Blue
        <input type="radio" name="color" value="blue">
      </label>
      <label>
        Black
        <input type="radio" name="color" value="black">
      </label>
    </div>
  </form>
`;

const div = document.querySelector(".container");
const radios = [...document.querySelectorAll("input[type=radio]")];

// Properties that are useful
radios.forEach((radio) => {
  console.log(radio.value);
  console.log(radio.checked);
});

// events for radio button
div.addEventListener("change", () => {
  const checked = radios.find((radio) => radio.checked).value;
  console.log(checked);
});
console.log(div, radios);
