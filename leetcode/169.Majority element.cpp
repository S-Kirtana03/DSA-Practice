#Problem:169.Majority element
#Link:https://leetcode.com/problems/majority-element/
#Difficulty:Easy

DESCRIPTION:
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.


SOLUTION:
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int ele=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                ele=nums[i];
            } 
            if(nums[i]==ele)  
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return ele;
    }
};