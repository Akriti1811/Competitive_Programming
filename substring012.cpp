/*
Smallest window containing 0, 1 and 2 
Given a string S consisting of the characters 0, 1 and 2. Your task is to find the length of the smallest substring of string S that contains all the three characters 0, 1 and 2. If no such substring exists, then return -1.
Example 1:
Input:
S = "01212"
Output:
3
Explanation:
The substring 012 is the smallest substring
that contains the characters 0, 1 and 2.
Example 2:
Input: 
S = "12121"
Output:
-1
Explanation: 
As the character 0 is not present in the
string S, therefor no substring containing
all the three characters 0, 1 and 2
exists. Hence, the answer is -1 in this case.
Your Task:
Complete the function smallestSubstring() which takes the string S as input, and returns the length of the smallest substring of string S that contains all the three characters 0, 1 and 2.
Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(1)
Constraints:
1 ≤ |S| ≤ 105
All the characters of String S lies in the set {'0', '1', '2'}
*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int smallestSubstring(string s) 
    {
        int f[3]={0};
        int l=0,h=-1,ans=INT_MAX,n=s.size();
        while(l<n)
        {
            while((!f[0]||!f[1]||!f[2])&&(h+1<n))
            {
                h++;
                f[s[h]-'0']++;
            }
            if(f[0]&&f[1]&&f[2])
            ans=min(ans,h-l+1);
            if(h>=l)
            {
                f[s[l]-'0']--;
                l++;
            }
        }
        if(ans==INT_MAX)
        ans=-1;
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
} 