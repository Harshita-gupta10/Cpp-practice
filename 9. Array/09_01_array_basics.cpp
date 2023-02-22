#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    // printing the array
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "Printing done" << endl;
}

int main()
{
    // declare
    int number[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    // accessing an array
    cout << "Value at 0 index : " << number[0] << endl;

    // cout << "Value at 20 index : " << number[20] << endl;

    // initialisation
    int second[3] = {5, 7, 11};

    // accessing an element
    cout << "Value at 2 index : " << second[2] << endl;

    int third[15] = {2, 7};
    printArray(third, 5);

    int fourth[15] = {0};
    printArray(fourth, 5);

    int fifth[15] = {1};
    printArray(fifth, 5);

    int fifthSize = sizeof(fifth) / sizeof(int);
    cout << "Size of fifth : " << fifthSize << endl;

    cout << endl
         << "Everything is fine" << endl
         << endl;
    return 0;
}