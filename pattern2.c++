#include<bits/stdc++.h>

using namespace std;

void pattern(int n)
{
    int inis = 0;
        for(int i=0;i<n;i++)
        {
            for(int j = 0; j < n-i;j++)
            {
                cout<<"*";
            }
            for(int space =0;space<inis;space++)
            {
                cout<<" ";
            }
            for(int j = 0; j < n-i;j++)
            {
                cout<<"*";
            }
            inis+=2;
            cout<<endl;
        }
        int inis2 = 2*n-2;
        for(int i=0;i<n;i++)
        {
            for(int j = 0; j <=i;j++)
            {
                cout<<"*";
            }
            for(int space =0;space<inis2;space++)
            {
                cout<<" ";
            }
            for(int j = 0; j <=i;j++)
            {
                cout<<"*";
            }
            inis2-=2;
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
