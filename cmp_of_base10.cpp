/*
Complement of Base 10 Integer
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.
Example 1:
Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
Example 2:
Input: n = 7
Output: 0
Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
Example 3:
Input: n = 10
Output: 5
Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.
Constraints:
0 <= n < 109
*/

//Time Complexity = O(log(n))
//Auxilary Space = O(log(n))
class Solution {
public:
    int bitwiseComplement(int n) 
    {
        if(n==0)
            return 1;
        string bin="",bincmp="";
        while(n>0)
        {
            string c=to_string(n%2);
            bin=c+bin;
            n/=2;
        }
        for(int i=0;i<bin.size();i++)
        {
            if(bin[i]=='0')
                bincmp+="1";
            else
                bincmp+="0";
        }   
        int dec=0, base=1;
        for(int i=bincmp.size()-1;i>=0;i--)
        {
            int r=bincmp[i]-'0';
            dec+=r*base;
            base*=2;
        }
        return dec;
    }
};

//Time Complexity = O(log(n))
//Auxilary Space = O(1)
class Solution {
public:
    int bitwiseComplement(int n) 
    {
        if(n==0)
            return 1;
        int dec=0,i=0;
        while(n>0)
        {
            dec+=!(n%2)*pow(2,i++);
            n/=2;
        }
        return dec;
    }
};

//Time Complexity = O(1)
//Auxilary Space = O(1)
class Solution {
public:
    int bitwiseComplement(int n) 
    {
        if(n==0)
            return 1;
        int d=log2(n)+1;
        int ex=pow(2,d)-1;
        return n^ex;
    }
};