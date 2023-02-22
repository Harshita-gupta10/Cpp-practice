#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int space = n-i; space > 0; space--)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        for (int k = 1; k <= i-1; k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}