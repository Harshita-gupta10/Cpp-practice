#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for(int j=n; j>=n-i+1;j--)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }

    //both the code work equally

    for (int i = 1; i <= n; i++)
    {
        for (int space = n-i; space >= 1; space--)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}