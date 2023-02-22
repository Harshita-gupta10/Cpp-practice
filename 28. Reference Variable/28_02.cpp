#include<bits/stdc++.h>
using namespace std;

//bad practice
int &func (int a)
{
    int num = a;
    int& ans = num;
    return ans;
}

//bad practice
int *fun(int n)
{
    int *ptr = &n;
    return ptr;
}

void update2(int &n)
{
    n++;
}

void update1 (int n)
{
    n++;
}

int main()
{
    int n=5;
    cout << "Before : " << n << endl;
    update1(n);
    cout << "After update 1 : " << n << endl;
    update2(n);
    cout << "After update 2 : " << n << endl;

    func(n);

    return 0;
}