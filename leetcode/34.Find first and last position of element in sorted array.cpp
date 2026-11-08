/*PROBLEM:34.Find first and last position of element in sorted array
LINK:https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
DIFFICULTY:Medium

PROBLEM DESCRIPTION:
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

APPROACH:

Array is sorted, so use Binary Search, not linear scan.
Do binary search twice:
  1. Find First:If nums[mid] == target, save ans = mid, 	then go left -> high = mid - 1To find earlier 	occurrence
  2. Find Last:If nums[mid] == target, save ans = mid, then 	go right -> low = mid + 1To find later occurrence
  3. Return: {first, last}Example [5,7,7,8,8,10], target 	8 -> First = 3, Last = 4 -> [3,4]
     If not found, both stay -1 -> [-1,-1]
Time: O(log n) + O(log n) = O(log n)*/

class Solution {
public:
    int findFirst(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, ans = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) 
            {
                ans = mid;
                high = mid - 1; 
            } else if (nums[mid] < target) 
                        low = mid + 1;
                    else 
                        high = mid - 1;
        }
        return ans;
    }
    int findLast(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, ans = -1;
        while (low <= high) 
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) 
            {
                ans = mid;
                low = mid + 1; 
            } else if (nums[mid] < target) 
                        low = mid + 1;
                    else 
                        high = mid - 1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {findFirst(nums, target), findLast(nums, target)};
    }
};