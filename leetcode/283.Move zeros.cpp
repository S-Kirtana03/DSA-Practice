/*PROBLEM:283.Move zeros
LINK:https://leetcode.com/problems/move-zeroes/
DIFFICULTY: Easy

PROBLEM DESCRIPTION:
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

APPROACH:
Moving the non-zero elements forward results in zeros at the end of the array.
*/


CODE:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};