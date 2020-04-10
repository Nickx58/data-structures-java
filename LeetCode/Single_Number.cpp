// Given a non-empty array of integers, every element appears twice except for one. Find that single one.
// Input: [2,2,1]
// Output: 1

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int number = 0;
        for(int a : nums) {
            number ^= a;
        }
        return number;
    }
};