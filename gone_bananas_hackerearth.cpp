/*
You are required to distribute  bananas among some people according to the following conditions:

You can select the number of people that receive bananas.
Each person should get more than one banana.
One person cannot receive all the bananas.
All the  bananas must be distributed.
Each person can only receive an integral number of bananas.
Write a program to determine whether the bananas can be distributed among the people.

Input format

First line:  denoting the number of test cases
Next  lines: 
Output format

For each test case, print Yes or No depending upon the result.

Sample Input
2
2
4
Sample Output
No
Yes
*/

#include<bits/stdc++.h>
using namespace std;
int prime[1000001];
void primenumbers()
{
    for(int i=2;i*i<=1000000;i++)
    {
        if(prime[i]==1)
        {
            for(int j=i*i;j<=1000001;j+=i)
            prime[j]=0;
        }
    }
}
string solve (int n) 
{
    if(n<=2 || prime[n]==1)
        return "No";
    else       
        return "Yes";

}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    fill(prime,prime+1000000,1);
    primenumbers();
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;

        string out_;
        out_ = solve(N);
        cout << out_;
        cout << "\n";
    }
}