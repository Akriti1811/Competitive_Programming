/*
A peak element is an element that is strictly greater than its neighbors.
Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.
You may imagine that nums[-1] = nums[n] = -∞.
You must write an algorithm that runs in O(log n) time.
Example 1:
Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
Example 2:
Input: nums = [1,2,1,3,5,6,4]
Output: 5
Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
*/

class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        if(a.size()==1)
            return 0;
        else if(a.size()==2)
        {
            if(a[0]>a[1])
                return 0;
            return 1;
        }
        int lo=0,hi=a.size()-1;
        int mid;
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
            if(mid-1>=0&&mid+1<=a.size()-1&&a[mid]>a[mid-1]&&a[mid]>a[mid+1])
            {
                return mid;
            }
            else if(mid+1<=a.size()-1&&a[mid]<a[mid+1])
                lo=mid+1;
            else
                hi=mid-1;        
        }
            return lo;
    }
};