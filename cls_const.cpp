#include <iostream>
using namespace std;

class MyClass
{

public:
    MyClass() // constructor should be same name as the class in cpp
    {
        cout << "I am constructor";
    }
};

int main()
{
    MyClass myObj;

    return 0;
}