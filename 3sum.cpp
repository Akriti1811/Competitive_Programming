/*
3Sum
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.
Example 1:
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Example 2:
Input: nums = []
Output: []
Example 3:
Input: nums = [0]
Output: []
Constraints:
0 <= nums.length <= 3000
-105 <= nums[i] <= 105
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
       vector<vector<int>>v;
         for(int i=0;i<n;i++)
         {
             if(i>0 && nums[i]==nums[i-1])
                 continue;
             int val=-nums[i];
             int s=i+1,l=n-1;
             while(s<l)
             {
                 int sum=nums[s]+nums[l];
                 if(sum<val)
                     s++;
                 else if(sum>val)
                     l--;
                 else
                 {
                     vector<int>temp={nums[i],nums[s],nums[l]};
                     v.push_back(temp);
                     while(s<n-1 && nums[s]==nums[s+1])
                         s++;
                     while(l>1 && nums[l]==nums[l-1])
                         l--;
                     s++;
                     l--;
                 }
             }
         }
        return v;
    }
};