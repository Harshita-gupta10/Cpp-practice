#include <bits/stdc++.h>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // char ch = 'q';
    // cout << sizeof(ch) << endl;

    // char *c = &ch;
    // cout << sizeof(c) << endl;

    // int *i = new int;
    // cout << sizeof(i) << endl;
    // cout << sizeof(new int) << endl;

    int n;
    cout << "Enter Size of array : ";
    cin >> n;

    // variable size array
    int *arr = new int[n];

    cout << "Enter elements in array : ";
    // taking input in array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int ans = getSum(arr, n);
    cout << "Sum : " << ans << endl;

    //case 1
    while (true)
    {
        int i = 5;
    }

    //case 2
    while (true)
    {
        int *ptr = new int;
    }
    return 0;
}