#include <iostream>
using namespace std;

class Clsobj
{

public:
    void doHello()
    {
        cout << "Hello OOP";
    }
};

int main()
{
    Clsobj obj;

    obj.doHello();
    return 0;
}