#include <bits/stdc++.h>
using namespace std;

// printing an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void sortOne(int arr[], int n)

{
    int left = 0, right = n - 1, step = 1;
    while (left < right)
    {
        cout << "Step " << step++ << endl;
        printArray(arr, n);
        cout << endl;

        while (arr[left] == 0)
        {
            left++;
        }
        while (arr[right] == 1)
        {
            right--;
        }
        // agar yaha pohoch gye, iska mtlb
        // arr[left]==1, arr[right]==0
        if (arr[left] == 1 && arr[right] == 0 && left<right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        cout << "Returning the sorted array" << endl;
        printArray(arr, n);
        cout << endl;
    }
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

    sortOne(arr, size);
    cout << "\nReturning after function call" << endl;
    printArray(arr, size);
    return 0;
}