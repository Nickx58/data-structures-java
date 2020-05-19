/*
 * Prototype Chain
 */

// Prototype Way
function Animal(name) {
  this.name = name;
}

Animal.prototype.play = function () {
  console.log(this.name);
};

function Dog(name, breed) {
  Animal.call(this, name);
  this.breed = breed;
}

Dog.prototype = Object.create(Animal.prototype);

Dog.prototype.bark = function () {
  console.log("Woff Woff");
};

Dog.prototype.constructor = Dog;

const sheru = new Dog("Sheru", "labra");

sheru.bark();
sheru.play();

function Cat(name, meow) {
  Animal.call(this, name);
  this.meow = meow;
}

Cat.prototype = Object.create(Animal.prototype);
Cat.prototype.sleep = function () {
  console.log("sleep");
};
Cat.prototype.constructor = Cat;

const cat = new Cat("billi", "meoo");
cat.sleep();
cat.play();

// class Way
class Animal {
  constructor(name) {
    this.name = name;
  }
  play() {
    console.log(this.name);
  }
}

const Leo = new Animal("leo");

class Dog extends Animal {
  constructor(name, breed) {
    super(name);
    this.breed = breed;
  }
  bark() {
    console.log("This dog can bark");
  }
}

const sheru = new Dog("sheru", "labradog");
sheru.bark();
sheru.play();

class Cat extends Animal {
  constructor(name, meo) {
    super(name);
    this.meo = meo;
  }
  sleep() {
    console.log("This cat can sleep");
  }
}

const billi = new Cat("billi", "sleep");
billi.play();
billi.sleep();
