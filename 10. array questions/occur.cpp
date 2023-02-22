#include <iostream>
using namespace std;

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
    int size, n = 0;
    cout << "Enter size of the array : ";
    cin >> size;

    int arr[100];
    cout << "Enter elements in the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int i, j, count = 0, var;

    cout << "The given array is " << endl;
    printArray(arr, size);

    cout<<endl;
    for (i = 0; i < size; i++)
    {
        var = arr[i];
        for (j = 0; j < size; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }
        cout<<arr[i]<< " occured "<< count<<" times in the array sequence "<< endl;
        count = 0;
    }
    return 0;
}