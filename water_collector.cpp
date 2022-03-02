/*
Water Collection 
It is raining in Geek City. The height of the buildings in the city is given in an array. Calculate the amount of water  that can be collected between all the buildings.
Example 1:
Input: 
N = 5
Arr[] = {3, 0, 2, 0, 4}
Output: 7
Explanation:
Geek city looks like
We can trap "3 units" of water between
3 and 2, "1 unit" on top of bar 2 and
"3 units" between 2  and 4. 
Example 2:
Input: 
N = 12
Arr[] = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation:
The structure is like below
Trap "1 unit" between first 1 and 2,
"4 units" between first 2 and 3 and
"1 unit" between second last 1 and last 2 
Your Task:  
You don't need to read input or print anything. Your task is to complete the function maxWater() which takes the array of integers arr[] and n as input parameters and returns the amount of water collected.
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
Constraints:
1 ≤ N ≤ 105
1 ≤ Arr[i] ≤ 103
*/

int maxWater(int a[], int n) 
    {
          int left[n],right[n],c=0;
          left[0]=a[0];
          right[n-1]=a[n-1];
          for(int i=1;i<n;i++)
          left[i]=max(left[i-1],a[i]);
          for(int i=n-2;i>=0;i--)
          right[i]=max(right[i+1],a[i]);
          for(int i=1;i<n-1;i++)
          {
              int h=min(left[i],right[i]);
              if(a[i]>h)
              continue;
              c+=h-a[i];
          }
          return c;
    }