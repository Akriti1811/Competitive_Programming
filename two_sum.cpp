/*
Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.
The tests are generated such that there is exactly one solution. You may not use the same element twice.
Example 1:
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
Example 2:
Input: numbers = [2,3,4], target = 6
Output: [1,3]
Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) 
    {
        vector<int> s;
        int f=0,l=a.size()-1;
        while(f<l)
        {
            if(a[f]+a[l]==target)
            {
                s.push_back(f+1);
                s.push_back(l+1);
                break;
            }
            else if(a[f]+a[l]>target)
                l--;
            else
                f++;
        }
        return s;
    }
};