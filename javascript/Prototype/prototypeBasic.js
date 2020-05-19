function AnimalProto(name, energy) {
  this.name = name;
  this.energy = energy;
}

AnimalProto.prototype.play = function () {
  console.log(this.name + " " + this.energy);
};

const sheru = new AnimalProto("sheru", 100);
sheru.play();

class AnimalClass {
  constructor(name, energy) {
    this.name = name;
    this.energy = energy;
  }
  play() {
    console.log(this.name + " " + this.energy);
  }
}

const leo = new AnimalClass("sheru", 100);
leo.play();
