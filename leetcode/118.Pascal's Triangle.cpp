#Problem:118.Pascal's Triangle
#Link:https://leetcode.com/problems/pascals-triangle/
#Difficulty:Easy

DESCRIPTION:Given an integer numRows, return the first numRows of Pascal's triangle.


SOLUTION:
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr;
        for(int i=0;i<numRows;i++)
        {
        vector<int> row;
           for(int j=0;j<=i;j++)
           {
                if(j==0 || j==i)
                {
                    row.push_back(1);
                }
                else
                {
                    row.push_back(arr[i-1][j]+arr[i-1][j-1]);
                }    
            }
            arr.push_back(row);
        }
        return arr; 
    }
};