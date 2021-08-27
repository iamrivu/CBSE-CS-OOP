/** 
 * A friend function is a function that is specified outside a class
 * but has the ability to access the class members' protected and private data.
*/

#include <iostream>
using namespace std;

class Test
{
    int x, y, z;

public:
    Test()
    {
        x = 0;
        y = 0;
        z = 0;
    }

    Test(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    friend Test add(Test t1, Test t2);

    void show()
    {
        cout << "\nTime:  " << x << " :" << y << " : " << z;
    }
};

Test add(Test t1, Test t2)
{
    Test t;
    int a, b;

    a = (t1.z + t2.z);
    t.z = a % 60;
    b = t1.y + t2.y + (a / 60);
    t.y = b % 60;
    t.x = t1.x + t2.x + (b / 60);

    return t;
}

int main()
{
    Test T(2, 53, 45);
    Test T1(3, 13, 35);
    Test T2;

    T1.show();
    T.show();
    T2 = add(T1, T);
    T2.show();
    return 0;
}
