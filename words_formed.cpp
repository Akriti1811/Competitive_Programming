/*
Find Words That Can Be Formed by Characters
You are given an array of strings words and a string chars.
A string is good if it can be formed by characters from chars (each character can only be used once).
Return the sum of lengths of all good strings in words.
Example 1:
Input: words = ["cat","bt","hat","tree"], chars = "atach"
Output: 6
Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.
Example 2:
Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"
Output: 10
Explanation: The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10.
Constraints:
1 <= words.length <= 1000
1 <= words[i].length, chars.length <= 100
words[i] and chars consist of lowercase English letters.
*/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars)
    {
        int g[26]={0},c[26],s=0,j;
        for(int i=0;i<chars.size();i++)
            g[chars[i]-'a']++;
        for(int i=0;i<words.size();i++)
        {
            fill(c,c+26,0);
            for(j=0;j<words[i].size();j++)
                c[words[i][j]-'a']++;
            for(j=0;j<26;j++)
            {
                if(c[j]>g[j])
                    break;
            }
            if(j==26)
                s+=words[i].size();
        }
        return s;
    }
};