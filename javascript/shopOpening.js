// Wednesday	10:30 AM - 8:00 PM
// Thursday	10:30 AM - 8:00 PM
// Friday	Closed
// Saturday	12:00 PM - 8:00 PM
// Sunday	4:00 PM - 8:00 PM
// Monday	10:30 AM - 8:00 PM
// Tuesday	10:30 AM - 8:00 PM

const openingData = [
  {
    day: "Monday",
    open: 10,
    close: 20,
    minutes: 30,
    isClose: false,
  },
  {
    day: "Tuesday",
    open: 10,
    close: 20,
    isClose: false,
  },
  {
    day: "Wednesday",
    open: 10,
    close: 20,
    isClose: false,
  },
  {
    day: "Thursday",
    open: 10,
    close: 20,
    isClose: false,
  },
  {
    day: "Friday",
    isClose: true,
  },
  {
    day: "Sat",
  },
];

function checkTimes(timeSlot, day) {
  const filteredDay = openingData.filter((d) => d.day === day);
  let message = "";
  if (filteredDay[0].isClose) {
    message = "We are close for today";
  } else if (
    timeSlot >= filteredDay[0].open &&
    timeSlot <= filteredDay[0].close
  ) {
    message = "We are open";
  } else {
    message = `We open at ${filteredDay[0].open} hours`;
  }
  return message;
}

console.log(checkTimes(23, "Tuesday"));
