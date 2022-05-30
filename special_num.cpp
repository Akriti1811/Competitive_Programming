/*

B. Special Numbers


Let's call a positive number special if it can be written as a sum of different non-negative powers of n. For example, for n=4 number 17 is special, because it can be written as 40+42=1+16=17, but 9 is not.

Theofanis asks you to help him find the k-th special number if they are sorted in increasing order. Since this number may be too large, output it modulo 109+7.

Input
The first line contains a single integer t (1≤t≤104) — the number of test cases.

The first and only line of each test case contains two integers n and k (2≤n≤109; 1≤k≤109).

Output
For each test case, print one integer — the k-th special number in increasing order modulo 109+7.

Example

input
3
3 4
2 12
105 564

output
9
12
3595374

Note
For n=3 the sequence is [1,3,4,9...]

*/

#include <bits/stdc++.h>
using namespace std;

long long m= 1000000007;


int main() 
{   
    int t; cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long ans=0;
        long long val=1;
        while(k>0)
        {
            if(k%2==1)
            {
                ans=((ans%m)+(val%m))%m;
            }
            val=(val*n)%m;
            k/=2;
        }
        
        cout<<ans<<"\n";
           }
	
	return 0;
}