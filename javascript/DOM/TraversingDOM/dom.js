/*
 * Traversing the DOM
 */

// parent Nodes

let items = document.querySelector("#items");
items.parentNode.style.backgroundColor = "#f4f4f4";

//child Node -> will give us the whitespces also
// if we want to get the element then use children property
items.children[1].style.backgroundColor = "yellow";

// First Child will give the white space text property
// if you want to get first Child of parents then use firstElementChild

items.firstElementChild.textContent = "Hello";

//last child
// items.lastChild will give whitespace
// use lastElementChild

items.lastElementChild.textContent = "Bye";

//siblings

items.previousElementSibling.textContent = "Items List";
items.previousElementSibling.style.color = "green";

// create element
let newDiv = document.createElement("div");
// set class
newDiv.className = "hello";
// set ID
newDiv.id = "id1";
// create text node;
let divText = document.createTextNode("Hello DOM");
// Add text to div
newDiv.appendChild(divText);

let container = document.querySelector(".container");
let h1 = document.querySelector("h1");
container.insertBefore(newDiv, h1);
