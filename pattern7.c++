/*For the pattern
A B C D E
A B C D
A B C
A B
A
*/

#include<bits/stdc++.h>

using namespace std;


void pattern(int n)
{
    for(int i=1;i<=n;i++)
    {   
        char ch = 'A';
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<ch<<" ";
            ch++;
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