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

int occurance(int arr, int n)
{
    
}

int main()
{
    int size, n=0, count[n];
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
        for (int j = 1; j < size; j++)
        {
            if (arr[i] == arr[j+1])
            {
                cout<<arr[i];
                count[i]++;
            }
        }
        cout<<endl;
    }

    return 0;
}