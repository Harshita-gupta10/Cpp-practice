#include <bits/stdc++.h>
using namespace std;
int n = 10;

void addition(int a[][10], int b[][10], int n);
void subtraction(int a[][10], int b[][10], int n);
void multiplication(int a[][10], int b[][10], int n);
void transpose(int a[][10], int n);
void display(int a[][10], int n);
int main()
{
    int a[10][10], b[10][10];
    int n;
    cin >> n;
    cout << "Enter values in first array : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // cout << "Values in first array : " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << a[i][j];
    //     }
    // }
    display(a[][10], n);

    cout << "Enter values in second array : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "Enter values in second array : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j];
        }
    }

    return 0;
}
void display(int c[][10], int n)
{
    for (int i =0; i< n; i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << c[i][j];
        }
    }
}
void addition(int a[][10], int b[][10], int n)
{
    int sum[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    display(sum[][10], n);
}

void subtraction(int a[][10], int b[][10], int n)
{
    int diff[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplication(int a[][10], int b[][10], int n)
{
    int pdt[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                pdt[i][j] = a[i][k] + b[k][j];
            }
        }
    }

    void transpose(int a[][10], int n)
    {
        int trans[10][10];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                trans[i][j] = a[j][i];
            }
        }
    }