#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<j<<" ";
        }
        for(int star=1;star<=i-1;star++)
        {
            cout<<"* ";
        }
        for (int star = 1; star <= i-1; star++)
        {
            cout<<"* ";
        }
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<n-i-j+2<<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
}