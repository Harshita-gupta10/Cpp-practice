#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}

int main()
{
    int n;
    cout<< "Enter number : ";
    cin >> n;

    if(isPrime(n))
    {
        cout << "It is prime number"<< endl;
    }
    else 
    {
        cout<< "It is not prime number"<<endl;
    }
    return 0;
}