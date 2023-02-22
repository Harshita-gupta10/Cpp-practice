#include <bits/stdc++.h>

using namespace std;
bool linearSearch(int array[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
            return 1;
    }
    return 0;
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
    int key;
    cout << "Enter element(key) to search : ";
    cin >> key;

    bool found;
    found  = linearSearch(arr, size, key);
    if (found)
    {
        cout << key << " is present in the array";
    }
    else
    {
        cout << key << " absent in the array";
    }
    return 0;
}