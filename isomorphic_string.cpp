/*
Isomorphic Strings
Given two strings s and t, determine if they are isomorphic.
Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
Example 1:
Input: s = "egg", t = "add"
Output: true
Example 2:
Input: s = "foo", t = "bar"
Output: false
Example 3:
Input: s = "paper", t = "title"
Output: true
Constraints:
1 <= s.length <= 5 * 104
t.length == s.length
s and t consist of any valid ascii character.
*/


class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        int n=s.size();
        vector<int> smap(256,-1),tmap(256,-1);
        for(int i=0;i<n;i++)
        {
            if(smap[s[i]]==-1)
            {
                smap[s[i]]=t[i];
                if(tmap[t[i]]==-1)
                     tmap[t[i]]=s[i];
                else
                    return false;
            }
            else if(smap[s[i]]!=t[i])
                return false;
        }
        return true;
    }
};