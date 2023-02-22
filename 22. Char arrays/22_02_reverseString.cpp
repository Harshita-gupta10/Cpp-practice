#include<bits/stdc++.h>
using namespace std;
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverseString(char name[])
{
    int n= getLength(name);
    int s=0;
    int e = n-1;
    // for (int i=0;i<n-2;i++)
    // {
    //     swap(name[i], name[n-i-1]);
    // }
    while(s<=e)
    {
        swap(name[s++], name[e--]);
    }
}

int main()
{
    char name[20];
    cout << "Enter yor name : ";
    cin >> name;

    cout << "Your name is : ";
    cout << name << endl;

    reverseString(name);
    cout<<"Reversed name is : ";
    cout<<name<<endl;
    return 0;
}