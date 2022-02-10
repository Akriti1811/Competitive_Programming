/*
Transfiguration 
Professor McGonagall teaches transfiguration at Hogwarts. She has given Harry the task of changing himself into a cat. She explains that the trick is to analyze your own DNA and change it into the DNA of a cat. The transfigure spell can be used to pick any one character from the DNA string, remove it and insert it in the beginning. 
Help Harry calculates minimum number of times he needs to use the spell to change himself into a cat.
Example 1:
Input: 
A = "GEEKSFORGEEKS" 
B = "FORGEEKSGEEKS"
Output: 3
Explanation:The conversion can take place 
in 3 operations:
1. Pick 'R' and place it at the front, 
   A="RGEEKSFOGEEKS"
2. Pick 'O' and place it at the front, 
   A="ORGEEKSFGEEKS"
3. Pick 'F' and place it at the front, 
   A="FORGEEKSGEEKS"
Example 2:
Input: 
A = "ABC" 
B = "BCA"
Output: 2
Explanation: The conversion can take place 
in 2 operations:
1. Pick 'C' and place it at the front, 
   A = "CAB"
2. Pick 'B' and place it at the front, 
   A = "BCA"
Your Task:  
You don't need to read input or print anything. Complete the function transfigure() which takes strings A and B as input parameters and returns the minimum number of spells needed. If it is not possible to convert A to B then return -1.
Expected Time Complexity: O(max(|A|, |B|))
Expected Auxiliary Space: O(1)
Constraints:
1 ≤ |A|, |B| ≤ 105
A and B consists of lowercase and uppercase letters of english alphabet only.
*/

#include<bits/stdc++.h>
using namespace std;
class Solution{
    
    public:
    int transfigure (string a, string b)
    {
    	int n=a.length(),m=b.length();
    	int ac[256]={0},bc[256]={0};
    	int c=0;
        for(int i=0;i<n;i++)
            ac[a[i]]++;
        for(int i=0;i<m;i++)
            bc[b[i]]++;
        for(int i=0;i<256;i++)
        {
            if(ac[i]!=bc[i])
            return -1;
        }
        for(int i=n-1,j=m-1;i>=0; )
        {
            while(i>=0 && a[i]!=b[j])
                i--,c++;
            if(i>=0)
                i--,j--;
        }
        return c;
    }
};
int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  