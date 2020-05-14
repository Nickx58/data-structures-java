let mainHeader = document.querySelector("#main-header");

mainHeader.style.borderBottom = "solid 4px black";

let odd = document.querySelectorAll("li:nth-child(odd)");
let even = document.querySelectorAll("li:nth-child(even)");

odd.forEach((item) => {
  item.style.backgroundColor = "#f4f4f4";
});

even.forEach((item) => {
  item.style.backgroundColor = "#ccc";
});
