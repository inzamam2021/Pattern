/*
For the following pattern
E 
E D 
E D C
E D C B
E D C B A*/
#include<bits/stdc++.h>

using namespace std;

void pattern(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j = n-1;j>=n-1-i;j--)
        {
            cout<< char(65+j) <<" ";
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