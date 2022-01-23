/*
Maximum Number of Words You Can Type
There is a malfunctioning keyboard where some letter keys do not work. All other keys on the keyboard work properly.
Given a string text of words separated by a single space (no leading or trailing spaces) and a string brokenLetters of all distinct letter keys that are broken, return the number of words in text you can fully type using this keyboard.
Example 1:
Input: text = "hello world", brokenLetters = "ad"
Output: 1
Explanation: We cannot type "world" because the 'd' key is broken.
Constraints:
1 <= text.length <= 104
0 <= brokenLetters.length <= 26
text consists of words separated by a single space without any leading or trailing spaces.
Each word only consists of lowercase English letters.
brokenLetters consists of distinct lowercase English letters.
*/

class Solution {
public:
    int canBeTypedWords(string text, string b) 
    {
        string s="";
        int flag=0,c=0;
        for(int i=0;i<text.size();i++)
        {
            s="",flag=0;
            while(text[i]!=' '&&i<text.size())
            {
                s+=text[i++];
            }
            for(int j=0;j<b.size();j++)
            {
                if(s.find(b[j])!= std::string::npos)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                c++;
        }
        return c;
    }
};