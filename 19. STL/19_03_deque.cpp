#include <bits/stdc++.h>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    cout << "Array is : ";
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);

    cout << "Array is : ";
    for (int i : d)
    {
        cout << i << " ";
    }
    cout<<endl;

    /*d.pop_front();
    cout<<"After Pop front : ";
    for (int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_back();
    cout<<"After Pop back : ";
    for (int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;*/

    cout << "Print first index element : " << d.at(1) << endl;
    cout << "Front element : " << d.front() << endl;
    cout << "Back element : " << d.back() << endl;

    cout<<"Empty or not : "<< d.empty()<<endl;

    cout<< "before erase : "<< d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"After erase : "<< d.size()<<endl;

    return 0;
}