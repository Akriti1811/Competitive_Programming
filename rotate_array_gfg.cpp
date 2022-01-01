#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,d;
	    cin>>n>>d;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    {
	        if(d==n)
	        d=0;
	        b[i]=a[d++];
	    }
	    for(int i=0;i<n;i++)
	    cout<<b[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}