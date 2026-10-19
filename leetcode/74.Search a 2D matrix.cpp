#Problem:74.Search a 2D matrix
#Link:https://leetcode.com/problems/search-a-2d-matrix/
#Difficulty:Medium

DESCRIPTION:
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

SOLUTION:
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int left=0,right= row*col-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            int val=matrix[mid/col][mid%col];
            if(val==target)
                return true;
            else if(val<target)
                    left=mid+1;
                 else
                    right=mid-1;       
        }
        
        return false;
    }
};