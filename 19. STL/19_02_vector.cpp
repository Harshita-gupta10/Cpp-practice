#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;

    vector<int> a(5,1);
    cout<<"Print a : ";
    for (int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<< "Copying vector a in last : ";
    vector<int> last(a);
    for (int i:last)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    cout<< "Capacity : "<< v.capacity()<<endl;

    v.push_back(10);
    cout<< "Capacity : "<< v.capacity()<<endl;

    v.push_back(20);
    cout<< "Capacity : "<< v.capacity()<<endl;

    v.push_back(30);
    cout<< "Capacity : "<< v.capacity()<<endl;
    
    cout<<"Size : "<< v.size()<<endl;
    cout << "Element at 2nd index : "<< v.at(2)<<endl;

    cout<<"First element : "<<v.front()<<endl;
    cout<<"Last element : "<<v.back()<<endl;

    cout<<"Before Pop : ";
    for (int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"After Pop : ";
    for (int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before clear size : "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size : "<<v.size()<<endl;
    cout<<"After clear capacity : "<<v.capacity()<<endl;

    //Time complexities for these are O(1)

    return 0;
}