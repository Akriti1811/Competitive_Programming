/*
Nth number made of prime digits 
Given a number 'N'. The task is to find the Nth number whose each digit is a prime number i.e 2, 3, 5, 7. In other words you have to find nth number of this sequence : 2, 3, 5, 7, 22, 23 ,.. and so on.

Example 1:

Input:
N = 10
Output: 33
Explanation:10th number in the sequence of
numbers whose each digit is prime is 33.
Example 2:

Input:
N = 21
Output: 222
Explanation:21st number in the sequence of
numbers whose each digit is prime is 222.
Your Task:
Complete primeDigits function and return the nth number of the given sequence made of prime digits.

Constraints:
1 <= N <= 100 
*/

	int primeDigits(int n)
    {
        int len=1;
        int d=1,prev=0,curr,num=0;
        
        while(true)
        {
            curr=prev+pow(4,len);
            if(prev<n && curr >= n)
            break;
            len++;
            prev=curr;
        }
        for(int i=1;i<=len;i++)
        {
            for(int j=1;j<=4;j++)
            {
                if((prev + pow(4,len-i))<n)
                    prev+=pow(4,len-i);
                else
                {
                    if(j==1)
                    num=num*10+2;
                    else if(j==2)
                    num=num*10+3;
                    else if(j==3)
                    num=num*10+5;
                    else 
                    num=num*10+7;
                    break;
                }
            }
        }
        return num;
    }