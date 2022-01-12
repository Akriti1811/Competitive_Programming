/*
 Valid Palindrome
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.
Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
*/

class Solution {
public:
    bool isPalindrome(string s) 
    {
        int l=s.length();
        string t="",rev="";
        for(int i=0;i<l;i++)
        {
            if(isupper(s[i]))
                t+=tolower(s[i]);
            else if(islower(s[i]))
                t+=s[i];
            else if(isdigit(s[i]))
                t+=s[i];
            else
                continue;
        }
        int l1=t.length();
        for(int i=l1-1;i>=0;i--)
            rev+=t[i];
        if(t==rev)
            return true;
        else 
            return false;
    }
};