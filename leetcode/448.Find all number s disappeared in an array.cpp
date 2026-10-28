/*PROBLEM:448.Find all number s disappeared in an array
LINK:https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
DIFFICULTY:Easy

PROBLEM DESCRIPTION:
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

APPROACH:
We will use the array itself as a visited map. If number x appears, we mark index x-1 as visited.
*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    for(int i=0; i<nums.size(); i++)
    {
        int idx = abs(nums[i]) - 1;
        if(nums[idx] > 0) nums[idx] = -nums[idx];
    }
    vector<int> ans;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i] > 0) ans.push_back(i+1);
    }
    return ans;
    }
};