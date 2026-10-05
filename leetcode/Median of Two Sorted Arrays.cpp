#Problem:Median of Two Sorted Arrays
#Link:https://leetcode.com/problems/median-of-two-sorted-arrays/
#Difficulty:Hard

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr;
        for(int i=0;i<nums1.size();i++)
        {
            arr.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            arr.push_back(nums2[i]);
        }
        std::sort(arr.begin(),arr.end());
        int mid=arr.size()/2;
        if(arr.size()%2==0)
        {
            return (arr[mid-1]+arr[mid])/2.0;
        }
        else
        {
            return arr[mid];
        }
    }
};

