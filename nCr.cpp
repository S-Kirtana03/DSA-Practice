#Problem:nCr
#Link:https://www.geeksforgeeks.org/problems/ncr1019/1
#Difficulty:Medium

Given two integers n and r, find the value of the binomial coefficient nCr

A binomial coefficient nCr can be defined as the coefficient of xr in the expansion of (1 + x)n that gives the number of ways to choose r objects from a set of n objects without considering the order.
The binomial coefficient nCr is calculated as : C(n,r) = n! / r! * (n-r) !

class Solution {
  public:
    int nCr(int n, int r) {
        // code here
        if (r > n)
        {
            return 0;
        }
        if(r==n || r==0)
        {
            return 1;
        }
        if (r > n - r)
        {
            r = n - r;
        }
        unsigned long long res = 1;
        for (int i = 1; i <= r; i++)
        {
            res = res * (n - r + i) / i;
        }
        return res;
    }

};