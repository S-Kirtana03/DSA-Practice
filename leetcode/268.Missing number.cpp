Problem:268.Missing number
Link:https://leetcode.com/problems/missing-number/
Difficulty: Easy

Approach:
Find the expected sum of the array for the size of the given vector.
Formula to find the expected sum range=size*(size+1)/2;
Move across the given vector and calculate the actual sum of the elements of the given vector.
Subtracting the actual sum from the expected sum gives the missing sum.


Why it works:
Calculating the expected sum and actual sum ,and then subtracting both gives the result.

Complexity:
Space: O(1) 
Time: O(n)

Code:
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       int range=n*(n+1)/2;
       int present=0;
       for(int i:nums)
       {
          present+=i;
       }
       return range-present;
    }
};