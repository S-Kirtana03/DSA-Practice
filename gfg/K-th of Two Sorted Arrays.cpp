#Problem:K-th of Two Sorted Arrays
#Link:https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1
#Difficulty:Medium

Given two sorted arrays a[] and b[] and an element k, find the element that would be at the kth position of the combined sorted array.

class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        vector<int>arr;
        for(int i=0;i<a.size();i++)
        {
            arr.push_back(a[i]);
        }
        for(int i=0;i<b.size();i++)
        {
            arr.push_back(b[i]);
        }
        std::sort(arr.begin(),arr.end());
        
        return arr[k-1];
    }
};