/*
Long Pressed Name
Your friend is typing his name into a keyboard. Sometimes, when typing a character c, the key might get long pressed, and the character will be typed 1 or more times.
You examine the typed characters of the keyboard. Return True if it is possible that it was your friends name, with some characters (possibly none) being long pressed.
Example 1:
Input: name = "alex", typed = "aaleex"
Output: true
Explanation: 'a' and 'e' in 'alex' were long pressed.
Example 2:
Input: name = "saeed", typed = "ssaaedd"
Output: false
Explanation: 'e' must have been pressed twice, but it was not in the typed output.
Constraints:
1 <= name.length, typed.length <= 1000
name and typed consist of only lowercase English letters.
*/

class Solution {
public:
    bool isLongPressedName(string name, string typed) 
    {
        int l=name.length(),l1=typed.length();
        if(name[l-1]!=typed[l1-1])
            return false;
        int i=0,j=0,p;
        while(i<l && j<l1)
        {
            if(name[i]==typed[j])
                i++,j++;
            else if(j>0 && typed[j]==typed[j-1])
                j++;
            else 
                break;
        }
        if(j!=l1)
        {
            p=j;
            for(;j<l1;j++)
                if(typed[p]!=typed[j])
                    break;
        }
        if(i==l && j==l1)
            return true;
        else 
            return false;
    }
};