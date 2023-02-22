#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]) // right me jao
        {
            s = mid + 1;
        }
        else if (key < arr[mid]) // left me jao
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]) // right me jao
        {
            s = mid + 1;
        }
        else if (key < arr[mid]) // left me jao
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int numOfOccurance(int arr[], int n, int key)
{
    int occurance = lastOcc(arr, n, key) - firstOcc(arr, n, key) + 1;
    return occurance;
}

int main()
{
    int even[11] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5};
    cout << "First occurance of 3 is " << firstOcc(even, 11, 3) << endl;
    cout << "last occurance of 3 is " << lastOcc(even, 11, 3) << endl;
    cout<< "Number of occurance is "<< numOfOccurance(even, 11, 3)<< endl;
    return 0;
}