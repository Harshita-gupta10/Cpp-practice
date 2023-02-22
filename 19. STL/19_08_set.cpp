#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(1);
    s.insert(0);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Count(present or not) of 5 : " << s.count(-5) << endl;

    set<int>::iterator itr = s.find(5);
    cout << "Value at itr : " << *it << endl;

    for(auto it = itr;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}
