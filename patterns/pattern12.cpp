#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        ch = 'A' + i - 1;
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}