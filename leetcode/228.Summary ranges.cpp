#Problem:228.Summary ranges
#Link:https://leetcode.com/problems/summary-ranges/
#Difficulty:Easy

DESCRIPTION:
You are given a sorted unique integer array nums.

A range [a,b] is the set of all integers from a to b (inclusive).

Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.


SOLUTION:
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> arr;
        if(nums.empty())
            return arr;
        int start=nums[0];
        for(int i=1;i<=nums.size();++i)
        {
            if(i==nums.size() || nums[i]!=nums[i-1]+1)
            {
                if(start==nums[i-1])
                {
                    arr.push_back(to_string(start));
                }
                else
                {
                    arr.push_back(to_string(start)+"->" + to_string(nums[i-1]));
                }
                if(i<nums.size())
                {
                    start=nums[i];
                }
            }
        }
        return arr;
    }
};


