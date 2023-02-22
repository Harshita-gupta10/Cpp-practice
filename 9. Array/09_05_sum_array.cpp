// print sum of all elements in an array. size, elements : user input
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, sum = 0;
    cout << "Enter size of the array : ";
    cin >> size;

    int arr[100];
    cout << "Enter elements in the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "The sum is : " << sum;
    return 0;
}