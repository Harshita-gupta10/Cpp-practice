#include <bits/stdc++.h>
using namespace std;
//method 1

// printing an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void altReverse(int arr[], int n)
{
    int odd = 1;
    int even = 0;
    while (even < n && odd < n)
    {
        swap(arr[odd], arr[even]);
        odd += 2;
        even += 2;
    }
    printArray(arr, n);
}

int main()
{
    int size;
    cout << "Enter size of the array : ";
    cin >> size;

    int arr[100];
    cout << "Enter elements in the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Alternatively Reverse array is : ";
    altReverse(arr, size);
    return 0;
}