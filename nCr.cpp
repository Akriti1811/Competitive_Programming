/*
nCr 
Given two integers n and r, find nCr. Since the answer may be very large, calculate the answer modulo 109+7.
Example 1:
Input: n = 3, r = 2
Output: 3
Explaination: 3C2 = 3. 
Example 2:
Input: n = 2, r = 4
Output: 0
Explaination: r is greater than n.
Your Task:
You do not need to take input or print anything. Your task is to complete the function nCr() which takes n and r as input parameters and returns nCr modulo 109+7..
Expected Time Complexity: O(n*r)
Expected Auxiliary Space: O(r)
Constraints:
1 ≤ n ≤ 1000
1 ≤ r ≤ 800
*/

#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    long long m=1000000007;
    long long int power(int a,long long int n)
    {
        long long int res=1;
        while(n)
        {
            if(n%2)
            res=((res%m)*(a%m))%m;
            n/=2;
            a=((a%m)*(a%m))%m;
        }
        return res%m; 
    }
    long long int fact(int n)
    {
        if(n==1||n==0)
        return 1;
        long long int ans=1;
        for(int i=2;i<=n;i++)
        {
            ans=((ans%m)*(i%m))%m;
        }
        return ans%m;
    }
    int nCr(int n, int r)
    {
        if(r>n)
        return 0;
        long long int d1=power(fact(r)%m,m-2)%m,d2=power(fact(n-r)%m,m-2)%m;
        //cout<<d1<<" "<<d2<<"\n";
        long long int d=((d1%m)*(d2%m))%m;
        return ((fact(n)%m)*(d%m))%m;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}  