#Problem:Nth Root of M
#Link:https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1
#Difficulty:Medium

You are given 2 numbers n and m, the task is to find n√m (nth root of m). If the root is not integer then return -1.

class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        if(m==0 || m==1)
        {
            return m;
        }
        int low=1,high=m;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            long long ans=1;
            int isov=0;
            for(int i=0;i<n;i++)
            {
                ans*=mid;
                if(ans>m)
                {
                    isov=1;
                    break;
                }
            }
            if(!isov && ans==m)
            {
                return mid;
            }
            else if(isov || ans>m)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return -1;
    }
};
