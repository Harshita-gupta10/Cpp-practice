#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 5;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;
    cout << "All is well" << endl;

    cout << "Printing p1 : " << ptr1 << endl;
    cout << "Address of p1 : " << &ptr1 << endl;
    cout << "Printing p2 : " << ptr2 << endl;

    cout << i << endl;
    cout << *ptr1 << endl;
    cout << **ptr2 << endl;

    cout << &i << endl;
    cout << ptr1 << endl;
    cout << *ptr2 << endl;

    // cout<< &&i<<endl;
    cout << &ptr1 << endl;
    cout << ptr2 << endl;

    return 0;
}