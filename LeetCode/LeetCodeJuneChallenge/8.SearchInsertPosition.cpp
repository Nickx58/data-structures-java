/*
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Input: [1,3,5,6], 5
Output: 2
*/

class Solution
{
public:
  int searchInsert(vector<int> &nums, int target)
  {
    int left = 0;
    int right = nums.size() - 1;
    int middle;
    while (left <= right)
    {
      middle = left + ((right - left) / 2);
      if (nums[middle] == target)
      {
        return middle;
      }
      else if (nums[middle] > target)
      {
        right = middle - 1;
      }
      else
      {
        left = middle + 1;
      }
    }
    return left;
  }
};