#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[20] = {1, 2, 3, 4};
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;
 
    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    return 0;
}