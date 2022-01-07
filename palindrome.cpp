/*
Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
For example, 121 is a palindrome while 123 is not.

Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
*/

class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0)
            return false;
        long long rev=0,c=x;
        while(x!=0)
        {
            int r=x%10;
            rev=rev*10+r;
            x=x/10;
        }
        if(c==rev)
        return true;
        else
            return false;
    }
};