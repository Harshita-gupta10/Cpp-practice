#include <bits/stdc++.h>
using namespace std;

void update(int **p)
{
    // p = p + 1;
    // kuch change hoga?

    //*p = *p + 1;
    // kuch change hoga?

    **p = **p + 1;
    // kuch change hoga?
}

int main()
{
    int i = 5;
    int *p1 = &i;
    int **p2 = &p1;
    cout << "Before : " << i << endl;
    cout << "Before : " << p1 << endl;
    cout << "Before : " << p2 << endl;
    update(p2);
    cout << "After : " << i << endl;
    cout << "After : " << p1 << endl;
    cout << "After : " << p2 << endl;


    return 0;
}