/*
Length of Last Word
Given a string s consisting of some words separated by some number of spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only.
Example 1:
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:
Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Constraints:
1 <= s.length <= 104
s consists of only English letters and spaces ' '.
There will be at least one word in s.
*/

class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int l=s.length(),c=0;
        for(int i=l-1;i>=0;i--)
        {
            if(s[i]==' ')
                continue;
            else
            {
                while(i>=0&&s[i]!=' ')
                {
                    c++;
                    i--;
                }
            }
            return c;
        }
        return 0;
    }
};