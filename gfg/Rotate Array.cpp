#Problem:Rotate array
#Link:https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1
#Difficulty:Medium

Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.

class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        if (n == 0) return;
        d = d % n;
        reverse(arr.begin(), arr.begin() + d);
        reverse(arr.begin() + d, arr.end());
        reverse(arr.begin(), arr.end());
    }
};
