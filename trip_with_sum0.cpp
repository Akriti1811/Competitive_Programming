/*
Find triplets with zero sum 

Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero. 

Example 1:

Input: n = 5, arr[] = {0, -1, 2, -3, 1}
Output: 1
Explanation: 0, -1 and 1 forms a triplet
with sum equal to 0.
Example 2:

Input: n = 3, arr[] = {1, 2, 3}
Output: 0
Explanation: No triplet with zero sum exists. 

Your Task:
You don't need to read input or print anything. Your task is to complete the boolean function findTriplets() which takes the array arr[] and the size of the array (n) as inputs and print 1 if the function returns true else print 0 if the function returns false. 

Expected Time Complexity: O(n2)
Expected Auxiliary Space: O(1)

Constrains:
1 <= n <= 104
-106 <= Ai <= 106
*/

bool findTriplets(int a[], int n)
    { 
        sort(a,a+n);
        for(int i=0;i<n-2;i++)
        {
            int target=-a[i];
            int start=i+1,last=n-1;
            while(start<last)
            {
                int sum=a[start]+a[last];
                if(sum==target)
                return true;
                else if(sum<target)
                start++;
                else
                last--;
            }
        }
        return false;
    }