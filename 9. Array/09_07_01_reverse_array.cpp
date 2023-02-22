#include<bits/stdc++.h>
using namespace std;

//printing an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<< " ";
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
    for (int i = 0; i < size/2; i++)
    {
        int temp = arr[i];
        arr[i]= arr[size-i-1];
        arr[size-i-1]=temp;
    }
    cout<<"Reverse array is : ";
    
    printArray(arr, size);

    return 0;
}