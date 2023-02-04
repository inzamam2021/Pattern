/*
For the pattern

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/


#include<bits/stdc++.h>

using namespace std;

void pattern(int n){
    for(int i =1; i<=n;i++)
    {
       for(int space=1;space<=n-i;space++)
       {
        cout<<" ";
       }
       char ch = 'A';
       int breakpoint = ((2*i-1)/2)+1;
       for(int j = 1 ; j<=2*i-1;j++)
       {
        cout<<ch;
        if(j<breakpoint)ch++;
        else ch--;
       
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