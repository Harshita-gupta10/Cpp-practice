#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 5;

    // create ref variable
    int &j = i;
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;

    return 0;
}