
/*
For the pattern
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/

#include<bits/stdc++.h>

using namespace std;

void pattern(int n)
{
    int inis = 2*n+6;
    for(int i=1;i<=n;i++)
    {
        
        for(int j = 1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        
        for(int space = 1; space <= inis;space++)
        {
            cout<<" ";
        }
        for(int j = i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        inis-=4;



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