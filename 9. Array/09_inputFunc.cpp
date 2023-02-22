#include<bits/stdc++.h>
using namespace std;
void input(int array[], int n)
{
    cout << "Enter size of the array : ";
    cin >> n;

    cout << "Enter elements in the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}

// printing an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size,arr[];

    input(arr,size);
    printArray(arr,size);
    return 0;
}