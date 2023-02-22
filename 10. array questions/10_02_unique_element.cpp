#include<bits/stdc++.h>
using namespace std;

// printing an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int unique1(int n, int arr[])
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
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

    if(size%2==0)
    printf("Enter odd number");
    else
    {
        cout<< "Unique element is :"<< unique1(size, arr);
    }
    return 0;
}