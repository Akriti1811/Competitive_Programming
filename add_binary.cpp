/*
Add Binary
Given two binary strings a and b, return their sum as a binary string.
Example 1:
Input: a = "11", b = "1"
Output: "100"
Example 2:
Input: a = "1010", b = "1011"
Output: "10101"
Constraints:
1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.
*/

class Solution {
public:
    string addBinary(string a, string b) 
    {
        int c=a.length()-1,d=b.length()-1,carry=0,s=0;
        string ans="";
        while(c>=0 || d>=0)
        {
            s=0;
            if(c>=0)
            {int r1=a[c--]-'0';
            s+=r1;}
            if(d>=0)
            {int r2=b[d--]-'0';
             s+=r2;}
            s+=carry;
            if(s==0)
                ans='0'+ans,carry=0;
            else if(s==1)
                ans='1'+ans,carry=0;
            else if(s==2)
                ans='0'+ans,carry=1;
            else
                ans='1'+ans,carry=1;
        }
        if(carry!=0)
            ans='1'+ans;
        return ans;
    }
};