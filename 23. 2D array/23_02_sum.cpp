#include<bits/stdc++.h>
using namespace std;

//row wise sum
void printRowsum(int arr[][3], int row, int col)
{
    cout<< "Row wise sum is : ";
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
        }
        cout << sum << " ";
    }
    cout<< "\n";
}

//column wise sum
void printColsum(int arr[][3], int row, int col)
{
    cout<< "Column wise sum is : ";
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum = sum + arr[row][col];
        }
        cout << sum << " ";
    }
    cout<<"\n";
}

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int index = 0;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
            index = col;
        }
        if (sum >= maxi)
        {
            maxi = sum;
        }
    }
    return index;
}

int largestColSum(int arr[][3], int row, int col)
{
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum = sum + arr[row][col];
        }
        cout << sum << " ";
    }
}
int main()
{
    int arr [3][3];
    //int arr [3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};
    //taking input -> row wise input
    cout<< "Enter elements of the array : ";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    //output array
    cout<< "The Array is : \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<< endl;
    }

    printRowsum(arr, 3, 3);
    printColsum(arr, 3, 3);
    cout<< largestRowSum(arr, 3, 3);
    //largestColSum(arr, 3, 3);
    return 0;
}