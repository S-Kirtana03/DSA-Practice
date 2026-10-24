/*PROBLEM:303.Range Sum Query-Immutable
LINK:https://leetcode.com/problems/range-sum-query-immutable/
DIFFICULTY:Easy

PROBLEM DESCRIPTION:
Given an integer array nums, handle multiple queries of the following type:

Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
Implement the NumArray class:

NumArray(int[] nums) Initializes the object with the integer array nums.
int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).


APPROACH:
Create a global array.
Add the previous array elements and store it in the next element
Copy the vector to the global vector.
Returning the subtraction of the right minus left gives the expected result.
*/

class NumArray {
private:
    vector<int> prefix_arr;
public:
    NumArray(vector<int>& nums) {
        prefix_arr = nums;
        for(int i=1;i<nums.size();i++)
        {
            nums[i]+=nums[i-1];
        }
        prefix_arr.resize(nums.size());
        copy(nums.begin(),nums.end(),prefix_arr.begin());
    }
    
    int sumRange(int left, int right) {
        if(left==0)
        {
            return prefix_arr[right]; 
        }
        return prefix_arr[right]-prefix_arr[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

