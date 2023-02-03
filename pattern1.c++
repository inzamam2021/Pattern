/*
To Print The pattern

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
 
 
 follow the code



*/


#include<bits/stdc++.h>

using namespace std;

void pattern(int n)
{
    int inis = 2*n-2;;
        for(int i=0;i<2*n-1;i++)
        {
            int star;
            if(i>(n-1)) star = (2*n-2)-i;
            else star=i;
            
            for(int j = 0;j<=star;j++)
            {
                cout<<"*";
            }
            
            for(int space=0;space<inis;space++)
            {
                cout<<" ";
            }
            
            for(int j = 0;j<=star;j++)
            {
                cout<<"*";
            }
            if(i<(n-1)) inis -=2;
            else inis+=2;
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

