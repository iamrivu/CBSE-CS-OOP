#include <iostream>
using namespace std;

class Base1
{

public:
    void show()
    {
        cout << "From base1 class";
    }
};

class Base2
{

public:
    void show2()
    {
        cout << "\nFrom base2 class";
    }
};

class Child : public Base1, public Base2
{

public:
    void showc()
    {
        show();
        show2();
        cout << "\nFrom child class";
    }
};

int main()
{
    Child x;
    
    x.showc();
    return 0;
}
