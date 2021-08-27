#include <iostream>
using namespace std;

class Base
{

protected:
    void show()
    {
        cout << "From base class";
    }
};

class Child : protected Base
{

public:
    void showc()
    {
        show();
        cout << "\nFrom child class";
    }
};

int main()
{
    Child c;

    c.showc();
    return 0;
}
