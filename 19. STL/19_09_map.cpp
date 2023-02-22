#include<bits/stdc++.h>
#include<map>

using namespace std;

int main()
{
    map<int,string> m;

    m[1] = "Babbar";
    m[13] = "Kumar";
    m[2] = "Love";

    m.insert((5, "bheem"));
    for(auto i: m)             
    {
        cout<<i.first<<" "<<i.second;
    }
    cout<<endl;

    cout<<"Finding -13 : "<<m.count(-13)<<endl;
    return 0;
}