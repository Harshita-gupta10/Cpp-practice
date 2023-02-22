#include<bits/stdc++.h>
#include <list>

using namespace std;

int main()
{
    list<int> l;

    // list<int> n(l);
    list<int> n(5, 100);

    cout << "Array n is : ";
    for (int i : n)
    {
        cout << i << " ";
    }
    cout<<endl;

    l.push_back(1);
    l.push_front(2);

    cout << "Array l is : ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"After erase : ";
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size of list : "<< l.size()<<endl;

    return 0;
}