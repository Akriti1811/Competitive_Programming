/*
A string is good if there are no repeated characters.
Given a string s, return the number of good substrings of length three in s.
Note that if there are multiple occurrences of the same substring, every occurrence should be counted.
A substring is a contiguous sequence of characters in a string.
Example 1:
Input: s = "xyzzaz"
Output: 1
Explanation: There are 4 substrings of size 3: "xyz", "yzz", "zza", and "zaz". 
The only good substring of length 3 is "xyz".
Example 2:
Input: s = "aababcabc"
Output: 4
Explanation: There are 7 substrings of size 3: "aab", "aba", "bab", "abc", "bca", "cab", and "abc".
The good substrings are "abc", "bca", "cab", and "abc".
*/

class Solution {
public:
    int countGoodSubstrings(string s) 
    {
        int c=0;
        string a;
        int l=s.length();
        for(int i=0;i<l-2;i++)
        {
            a=s.substr(i,3);
            if(a[0]!=a[1]&&a[0]!=a[2]&&a[2]!=a[1])
                c++;
        }
        return c;
    }
};