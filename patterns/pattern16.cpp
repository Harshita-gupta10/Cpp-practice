#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ascii = 'A';
    char k=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            k= ascii + i + j - 2;
            cout << k << " ";
        }
        cout << "\n";
    }

    return 0;
}