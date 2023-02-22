#include <bits/stdc++.h>
using namespace std;
int numberOfMatches(int n)
{
    int match = 0;
    if (n > 200 || n < 1)
        return 0;
    else
    {
        while (n > 1)
        {
            if (n % 2 == 0)
            {
                match += n / 2;
                n = n / 2;
            }
            else
            {
                match += (n - 1) / 2;
                n = (n - 1) / 2 + 1;
            }
        }
    }
    return match;
}
int main()
{
    int n;
    cin >> n;
    cout << numberOfMatches(n);
    return 0;
}