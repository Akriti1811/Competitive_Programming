/*
Union of Two Sorted Arrays 
Union of two arrays can be defined as the common and distinct elements in the two arrays.
Given two sorted arrays of size n and m respectively, find their union.
Example 1:
Input: 
n = 5, arr1[] = {1, 2, 3, 4, 5}  
m = 3, arr2 [] = {1, 2, 3}
Output: 1 2 3 4 5
Explanation: Distinct elements including 
both the arrays are: 1 2 3 4 5.
Example 2:
Input: 
n = 5, arr1[] = {2, 2, 3, 4, 5}  
m = 5, arr2[] = {1, 1, 2, 3, 4}
Output: 1 2 3 4 5
Explanation: Distinct elements including 
both the arrays are: 1 2 3 4 5.
Example 3:
Input:
n = 5, arr1[] = {1, 1, 1, 1, 1}
m = 5, arr2[] = {2, 2, 2, 2, 2}
Output: 1 2
Explanation: Distinct elements including 
both the arrays are: 1 2.
Your Task: 
You do not need to read input or print anything. Complete the function findUnion() that takes two arrays arr1[], arr2[], and their size n and m as input parameters and returns a list containing the union of the two arrays. 
Expected Time Complexity: O(n+m).
Expected Auxiliary Space: O(n+m).
Constraints:
1 <= n, m <= 105
1 <= arr[i], brr[i] <= 106
*/

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int a1[], int a2[], int n, int m)
    {
        vector<int>ans;
        int k=0,i=0,j=0;
        while(i<n && j<m)
        {
            if(i>0 && a1[i]==a1[i-1])
            {
                i++;
                continue;
            }
            if(j>0 && a2[j]==a2[j-1])
            {
                j++;
                continue;
            }
            if(a1[i]==a2[j])
            {
                ans.push_back(a1[i]);
                i++,j++;
            }
            else if(a1[i]<a2[j])
            ans.push_back(a1[i]),i++;
            else
            ans.push_back(a2[j]),j++;
        }
        while(i<n)
        {
            if(i>0 && a1[i]==a1[i-1])
            {
                i++;
                continue;
            }
            ans.push_back(a1[i++]);
        }
        while(j<m)
        {
            if(j>0 && a2[j]==a2[j-1])
            {
                j++;
                continue;
            }
           ans.push_back(a2[j++]);
        }
        return ans;
    }
};
int main() {	
	int T;
	cin >> T;
	
	while(T--){
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;	    
	}
	return 0;
}  