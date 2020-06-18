/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function (nums) {
  let sum = [];
  let currentSum = 0;
  for (let i = 0; i < nums.length; i++) {
    sum.push(currentSum + nums[i]);
    currentSum = sum[i];
  }
  return sum;
};
