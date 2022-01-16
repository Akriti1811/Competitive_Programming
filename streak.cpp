/*
Every time you come across a number, Little Jhool carefully manipulates it. He doesn't want you to face numbers which have "21" as a part of them. Or, in the worst case possible, are divisible by 21.
If you end up facing such a number you feel sad... and no one wants that - because you start chanting "The streak is broken!" , if the number doesn't make you feel sad, you say, "The streak lives still in our heart!"
Input Format:
The first line contains a number, t, denoting the number of test cases.
After that, for t lines there is one number in every line.
Output Format:
Print the required string, depending on how the number will make you feel.

Constraints:
1 ≤ t ≤ 100
1 ≤ n ≤ 1000000
Sample Input
3
120
121
231

Sample Output
The streak lives still in our heart!
The streak is broken!
The streak is broken!
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p=0;
        if(n%21==0)
        {
            p=1;
        }
        else
        {
            string s=to_string(n),a;
            int l=s.length();
            for(int i=0;i<l-1;i++)
            {
                a=s.substr(i,2);
                if(a=="21")
                {
                    p=1;
                    break;
                }
            }
        }
        if(p==0)
        cout<<"The streak lives still in our heart!"<<"\n";
        else
        cout<<"The streak is broken!"<<"\n";
    }
    return 0;
}

