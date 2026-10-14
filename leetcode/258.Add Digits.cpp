#Problem:258.Add Digits
#Link:https://leetcode.com/problems/add-digits/
#Difficulty:Easy

Description:Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        while(num)
        {
            sum=sum+(num%10);
            num=num/10;
        }
        if(sum<10)
            return sum;
        else
          return addDigits(sum);
    }
};