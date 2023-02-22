#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    a = 4;
    b = 6;

    cout << "a&b : " << (a & b) << endl;
    cout << "a|b : " << (a | b) << endl;
    cout << "~a : " << (~a) << endl;
    cout << "a^b : " << (a ^ b) << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (15 << 2) << endl;
    cout << (21 << 2) << endl;
    return 0;
}