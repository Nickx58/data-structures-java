import "../assets/css/style.css";

const app = document.getElementById("app");

// Inserting DOM elements;

app.innerHTML = `
<div class="todos">
<div class="todos-header">
  <h3 class="todo-title">To do list</h3>
  <div>
    <p>
      You have <span class="todos-count"></span> items
    </p>
    <button type="button" class="todos-clear" style="display: none;">
      Clear
    </button>
  </div>
</div>
<form class="todos-form" name="todos">
  <input type="text" placeholder="What nexts?" name="todo">
  <ul class="todos-list">
  </ul>
</form>
</div>
`;

// state
let todos = [];

// selectors
const form = document.querySelector("form");
const input = document.querySelector("input[type=text]");

// functions
function addTodo(e) {
  e.preventDefault();
  const label = input.value.trim();
  const complete = false;
  todos = [
    ...todos,
    {
      label,
      complete,
    },
  ];
  console.log(todos);
  input.value = "";
}
// init
function init() {
  // ADD todo
  form.addEventListener("submit", addTodo);
}

init();
