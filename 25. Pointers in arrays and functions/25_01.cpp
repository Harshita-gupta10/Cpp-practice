#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {2, 5, 6};

    cout << "Address of first memory block is : " << arr << endl;
    cout << arr[0] << endl;
    cout << "Address of first memory block is : " << &arr[0] << endl;
    cout << "4th : " << *arr << endl;
    cout << "5th : " << *arr + 1 << endl;
    cout << "6th : " << *(arr + 1) << endl;
    cout << "7th : " << *(arr) + 1 << endl;
    cout << "8th : " << arr[2] << endl;
    cout << "9th : " << *(arr + 2) << endl;
    int i = 3;
    cout << i[arr] << endl;
    return 0;
}