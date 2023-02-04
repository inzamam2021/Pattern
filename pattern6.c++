/*
For The pattern
A
BB
CCC
DDDD
EEEEE
*/

#include<bits/stdc++.h>

using namespace std;


void pattern(int n)
{
    char ch = 'A';
    for(int i=1;i<=n;i++)
    {
        
        for(int j = 1;j<=i;j++)
        {
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i =0;i<t;i++)
    {
        int n;
        cin >> n;
        pattern(n);
    }
}