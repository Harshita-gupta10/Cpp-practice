#include <bits/stdc++.h>
// #include "hero.cpp"
using namespace std;

class hero
{
    // properties

public:
    int health;

    char level;

    hero()
    {
        cout << "Constructor called"<<endl;
    }

    void print()
    {
        cout << level << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    //object created statically
    cout<<"Hi"<<endl;
    hero ramesh;
    cout<<"Hello"<< endl;
    /*
    // creation of object
    
    Hero ramesh;

    cout << "health of Ramesh is : " << ramesh.getHealth() << endl;

    ramesh.setHealth(70);
    ramesh.level = 'A';
    cout << "Size : " << sizeof(ramesh) << endl;
    cout << "Health is : " << ramesh.getHealth() << endl;
    cout << "Level is : " << ramesh.level << endl;
    

    hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "Level is : " << a.level << endl;
    cout << "Health is : " << a.getHealth() << endl;

    // dynamically
    hero *b = new hero;

    b->setLevel('A');
    b->setHealth(70);

    cout << "Level is : " << (*b).level << endl;
    cout << "Health is : " << (*b).getHealth() << endl;

    cout << "Level is : " << b->level << endl;
    cout << "Health is : " << b->getHealth() << endl;

    */  
   
     
    return 0;
}