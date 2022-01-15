/*
Find Pair Given Difference 
Given an array Arr[] of size L and a number N, you need to write a program to find if there exists a pair of elements in the array whose difference is N.
Example 1:
Input:
L = 6, N = 78
arr[] = {5, 20, 3, 2, 5, 80}
Output: 1
Explanation: (2, 80) have difference of 78.
Example 2:
Input:
L = 5, N = 45
arr[] = {90, 70, 20, 80, 50}
Output: -1
Explanation: There is no pair with difference of 45.
*/

#include<bits/stdc++.h>
using namespace std;

bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
bool findPair(int a[], int size, int n)
{
    sort(a,a+size);
    int f=0,l=1;
    while(f<size&&l<size)
    {
        if(a[l]-a[f]==n)
        return true;
        else if(a[l]-a[f]>n)
        f++;
        else
        l++;
    }
    return false;  
}