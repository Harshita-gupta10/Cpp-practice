#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=1;
    for(int i=0;i<=n;i++)
    {
        for(int space=0;space<=i-1;space++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=n-i+1;j++)
        {
            cout<< count <<" ";
        }
        count++;
        cout<<endl;
    }
    return 0;
}