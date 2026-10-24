/*PROBLEM:349.Intersection of Two Arrays
LINK:https://leetcode.com/problems/intersection-of-two-arrays/
DIFFICULTY:Easy

PROBLEM DESCRIPTION:
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

APPROACH:
Compare each element of nums2 with each element of nums1.
If the that's true:
Find if that number already exists in the final array. 
If that exists no need to push that or else push the element to the final array.
*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    if(find(arr.begin(), arr.end(), nums1[i]) == arr.end())
                    arr.push_back(nums1[i]);
                }
            }
        }
        return arr;
    }
};