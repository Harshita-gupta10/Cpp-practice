#include <bits/stdc++.h>
using namespace std;

//printing an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<< " ";
    }
}

void update(int arr[], int n)
{
    cout << endl
         << "Inside the function" << endl;

    // updating array's first element
    arr[0] = 120;

    // printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Going back to main" << endl;
}

int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);
    printArray(arr, 3);
    return 0;
}