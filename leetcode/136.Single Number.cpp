#Problem:136.Single Number
#Link:https://leetcode.com/problems/single-number/
#Difficulty:Easy

DESCRIPTION:
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.


SOLUTION:
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i=i+2)
        {
            if(nums[i]!=nums[i-1])
            {
                return nums[i-1];
            }
        }
        return nums[nums.size()-1];
    }
};