/*
Aditya loves playing with Modulo operation.He has a sequence of N positive integers and he applies a MOD M operation on each of them where M is another positive integer. Find the number of distinct and unique numbers in the sequence after the Modulo operation.
Input Format
Input
First line of input contains an integer T, denoting the number of test cases. Then follows description of T cases.
The first line of each test case contains two space separated integers N and M.
The next line contains N space separated integers in the sequence.
Constraints
T<=10
N <= 1000
Each element in the sequence is less than equal to 1000.
Output Format
Output
For each test case, the first line contains the no of distinct elements in the sequence and the second line contains the no of unique elements in the sequence after the MOD operation.
Sample Input
1
4 3
4 5 6 7
Sample Output
3
2
Explanation
Explanation
After the MOD 3 operation, the no of distinct elements are 3 and no of unique elements are 2.
Time Limit – 1 sec
*/

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,d=0,u=0;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int h[m];
        fill(h,h+m,0);
        for(int i=0;i<n;i++)
        {
            int r=a[i]%m;
            h[r]++;
        }
        for(int i=0;i<m;i++)
        {
            if(h[i]==0)
                continue;
            if(h[i]==1)
                u++;
            d++;
        } 
        cout<<d<<"\n"<<u<<"\n";
    }
    return 0;
}
