/*
For the pattern
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/

#include<bits/stdc++.h>

using namespace std;

void pattern(int n)
{
    for(int i = 1;i<= 2*n-1;i++)
    {
        int star;
        if(i>n)
        star=2*n-i;
        else star = i;
        for(int j = 1;j<=star;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        pattern(n);
    }
}