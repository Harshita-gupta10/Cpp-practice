#include <bits/stdc++.h>
using namespace std;
//METHOD 2

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
    for (int i = 0; i + 1 < n; i += 2)
    {
        swap(arr[i], arr[i + 1]);
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
    for (int i = 0; i < size; i++);
    {
        cin >> arr[i];
    }

    cout << "Alternatively Reverse array is : ";
    altReverse(arr, size);
    return 0;
}