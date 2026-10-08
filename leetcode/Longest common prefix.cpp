#Problem:Longest common prefix
#Link:https://leetcode.com/problems/longest-common-prefix/
#Difficulty:Easy

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".



class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        {
          return "";
        }
        string prefix="";    
        for(int i=0;i<strs[0].size();i++)
        {
            char word=strs[0][i];
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][i]!=word)
                    return prefix;
            }
            prefix+=word;
        }
        return prefix;
    }
};