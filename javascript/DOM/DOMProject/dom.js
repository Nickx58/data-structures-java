let form = document.getElementById("addForm");
let items = document.getElementById("items");
let filter = document.getElementById("filter");

// form submit event
form.addEventListener("submit", addItem);
// remove Item event
items.addEventListener("click", removeItem);
// filter event
filter.addEventListener("keyup", filterItems);

// add item to ul
function addItem(e) {
  e.preventDefault();

  // get input value
  let newItem = document.getElementById("item").value;

  // create new li item
  let li = document.createElement("li");
  li.className = "list-group-item";
  // Add text node with input value
  li.appendChild(document.createTextNode(newItem));

  // create delete button
  let deleteButton = document.createElement("button");
  // Add class to delete Button
  deleteButton.className = "btn btn-danger btn-sm float-right delete";
  // Add text to delete button
  deleteButton.append(document.createTextNode("X"));
  // append button in list item
  li.appendChild(deleteButton);
  // append list in the ul
  items.appendChild(li);
}

// remove item
function removeItem(e) {
  if (e.target.classList.contains("delete")) {
    if (confirm("Are you sure?")) {
      let li = e.target.parentElement;
      items.removeChild(li);
    }
  }
}

// filter item
function filterItems(e) {
  let text = e.target.value.toLowerCase();
  let list = items.getElementsByTagName("li");
  Array.from(list).forEach(function (item) {
    var itemName = item.firstChild.textContent;
    if (itemName.toLowerCase().indexOf(text) != -1) {
      item.style.display = "block";
    } else {
      item.style.display = "none";
    }
  });
}
