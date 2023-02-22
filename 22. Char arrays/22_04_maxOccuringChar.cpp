#include <bits/stdc++.h>
using namespace std;

char getMaxOccChar(string s)
{
    int arr[26] = {0};
    int num = 0;

    // create array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        //lowercase
        num = ch - 'a';
        arr[num]++;
    }
    //find maximum occ character
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a' + ans;
}

int main()
{
    string s;
    cout<<"Enter string : ";
    cin >> s;
    cout << getMaxOccChar(s) << endl;
    return 0;
}