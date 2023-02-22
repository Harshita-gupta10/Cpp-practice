#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int tri[n+1];
    tri[0]=0;
    tri[1]=1;
    tri[2]=1;
    for (int i = 0; i < n; i++)
    {
        tri[i]=tri[i-1]+tri[i-2]+tri[i-3];
        cout<<tri[i]<<endl;
    }
    cout<<tri[n];
    return 0;
}