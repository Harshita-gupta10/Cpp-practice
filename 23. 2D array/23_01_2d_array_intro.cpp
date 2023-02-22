#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    //linear search
    for(int row= 0; row<3; row++)
    {
        for (int col= 0; col<4; col++)
        {
            if(arr[row][col]== target)
                return 1;
        }
    }
    return 0;
}

int main()
{
    // create 2d array
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int arr [3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};
    /*
    //taking input -> row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    //taking input -> column wise input
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> arr[row][col];
        }
    }
    */

    //print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<< endl;
    }

    //searching an element in 2D array
    cout<< "Enter the element in array to search : ";
    int target = 0;
    cin >> target;
    
    if(isPresent(arr, target, 3, 4))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Not found"<< endl;
    }
    return 0;
}