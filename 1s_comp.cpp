/*
1's Complement 
Given an N bit binary number, find the 1's complement of the number. The ones' complement of a binary number is defined as the value obtained by inverting all the bits in the binary representation of the number (swapping 0s for 1s and vice versa).
Example 1:
Input:
N = 3
S = 101
Output:
010
Explanation:
We get the output by converting 1's in S
to 0 and 0s to 1
Example 2:
Input:
N = 2
S = 10
Output:
01
Explanation:
We get the output by converting 1's in S
to 0 and 0s to 1
Your Task:  
You don't need to read input or print anything. Your task is to complete the function onesComplement() which takes the binary string S, its size N as input parameters and returns 1's complement of S of size N.
Expected Time Complexity: O(N)
Expected Space Complexity: O(N)
Constraints:
1<=N<=100
*/

#include<bits/stdc++.h>
using namespace std; 
class Solution{ 
public:
    string onesComplement(string s,int n)
    {
        // string ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            s[i]='1';
            else
            s[i]='0';
        }
        return s;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.onesComplement(s,n)<<"\n";
    }
}