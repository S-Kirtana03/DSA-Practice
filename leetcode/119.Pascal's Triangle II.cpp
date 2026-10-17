#Problem:119.Pascal's Triangle II
#Link:https://leetcode.com/problems/pascals-triangle-ii/
#Difficulty:Easy

DESCRIPTION:
Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle


SOLUTION:
class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<vector<int>> arr;
       for(int i=0;i<=rowIndex;i++)
       {
         vector<int> rows;
         for(int j=0;j<=i;j++)
         {
            if(j==0 || j==i)
            {
                rows.push_back(1);
            }
            else
            {
                 rows.push_back(arr[i-1][j]+arr[i-1][j-1]);
            }
              
         }
        arr.push_back(rows); 
       }
       return arr[rowIndex]; 
    }
};