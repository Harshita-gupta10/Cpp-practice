#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<31;i++)
        {
            int ans=pow(2,i);
            if(ans==n)
                return true;
        }
        return false;
    return 0;
}