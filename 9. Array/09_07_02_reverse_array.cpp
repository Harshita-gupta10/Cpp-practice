#include <bits/stdc++.h>
using namespace std;
//swapping elements
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// printing an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    printArray(arr,n);
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

    cout << "Reverse array is : ";
    reverse(arr, size);
    // printArray(arr,size);
    return 0;
}