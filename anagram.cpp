/*
Valid Anagram
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
Example 1:
Input: s = "anagram", t = "nagaram"
Output: true
Example 2:
Input: s = "rat", t = "car"
Output: false
Constraints:
1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
*/

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int c1[26]={0},c2[26]={0};
        for(int i=0;i<s.size();i++)
            c1[s[i]-'a']++;
        for(int i=0;i<t.size();i++)
            c2[t[i]-'a']++;
        int j;
        for(j=0;j<26;j++)
        {
             if(c1[j]!=c2[j])
                break;
        }
        if(j==26)
            return true;
        else
            return false;
        
    }
};