#include <iostream>
using namespace std;

class Access
{

private:
    void doHello()
    {
        cout << "Hello from doHello using viewHello";
    }

public:
    void viewHello()
    {
        doHello();
    }
};

int main()
{
    Access obj;

    obj.viewHello();
    return 0;
}