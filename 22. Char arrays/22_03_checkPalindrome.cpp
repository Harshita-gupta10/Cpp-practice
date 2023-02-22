#include<bits/stdc++.h>
using namespace std;

char toLowerCase(char ch)
{
    if(ch>='a'&& ch<='z')
    {
        return ch;
    }
    return ch-'A'+'a';
}

// int checkPalindrome(char a[])
// {
//     int n = strlen(a);
//     int s = 0, e = n-1;
//     while(s<=e)
//     {
//         if(a[s++]!=a[e--])
//             return false;
//     }
//     return true;
// }

bool checkPalindrome(char a[],int n)
{
    int s = 0, e = n-1;
    while(s<=e)
    {
        if(toLowerCase (a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char ch[20];
    cout << "Enter string : ";
    cin >> ch;

    string str= {'a','b','\0','c','d','\0'};
    cout<<str<<endl;
    cout<<"Check palindrome : "<<checkPalindrome(ch, getLength(ch))<<endl;
    
    return 0;
}