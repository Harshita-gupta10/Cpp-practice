#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char k = 0;
    for (int i = 1; i <= n; i++)
    {
        k = 'A' + n - i;
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << "\n";
    }
    return 0;
}