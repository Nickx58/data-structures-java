let button = document.getElementById("button");
let select = document.querySelector("select");
let form = document.querySelector("form");

function onFormSubmit(e) {
  e.preventDefault();
}

form.addEventListener("submit", onFormSubmit);

function onButtonClicked() {
  document.getElementById("main").style.backgroundColor = "#f4f4f4";
}
button.addEventListener("click", onButtonClicked);

function selectChange(e) {
  console.log(e.target.value);
}
select.addEventListener("change", selectChange);
