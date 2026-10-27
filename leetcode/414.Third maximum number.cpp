/*PROBLEM:414.Third maximum number
LINK:https://leetcode.com/problems/third-maximum-number/
DIFFICULTY:Easy

PROBLEM DESCRIPTION:
You are given an integer array nums.

Return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.

APPROACH:
Traverse through the array and find the third, second, first maximum based on comparison.


ALTERNATIVE:O(nlogn)
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        if(nums.size()<3)
        {
            return nums[nums.size()-1];
        }
        return nums[nums.size()-3];
    }
};


*/
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max_1=LONG_MIN,max_2=LONG_MIN,max_3=LONG_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==max_1 || nums[i]==max_2 || nums[i]==max_3)
            {
                continue;
            }
            if(nums[i]>max_1)
            {
                max_3=max_2;
                max_2=max_1;
                max_1=nums[i];
            }
            else if(nums[i]>max_2 && nums[i]<max_1)
                 {
                    max_3=max_2;
                    max_2=nums[i];
                 }
                 else if(nums[i]>max_3)
                      {
                        max_3=nums[i];
                      }
        }              
        if(nums.size()<3 || max_3==LONG_MIN)
        {
            return (int)max_1;
        }
        return (int)max_3;
    }
};

