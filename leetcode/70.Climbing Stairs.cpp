/*PROBLEM:70.Climbing Stairs
LINK:https://leetcode.com/problems/climbing-stairs/
DIFFICULTY:Easy


PROBLEM DESCRIPTION:
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

*/
class Solution {
public:
    int climbStairs(int n) {
        if(n<=3)
            return n;
        int previous_1=3;
        int previous_2=2;
        int current=0;
        for(int i=3;i<n;i++)
        {
            current=previous_1+previous_2;
            previous_2=previous_1;
            previous_1=current;
        }    
        return current;
    }
};