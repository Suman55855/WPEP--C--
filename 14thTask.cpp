#include <iostream>
using namespace std;
class Base
{
public:
    int S, A, M;
    Base(int x, int y)
    {
        S = y - y;
        A = x + x;
        M = x * x;
    }
    Base(int, int y = 'A', int z = 'B')
    {
        S = y;
        A = y + 1 - 1;
        M = z - 1;
    }
    void Display(void)
    {
        cout << S << " " << A << " " << M << endl;
    }
};

class Derived : public Base
{
    int x, y, z;

public:
    Derived(int xx = 65, int yy = 66, int zz = 67) : Base(x)
    {
        x = xx;
        y = yy;
        z = zz;
    }
    void Display(int n)
    {
        if (n)
            Base::Display();
        else
            cout << x << " " << y << " " << z << endl;
    }
};

int main()
{
    Derived objDev;
    objDev.Display(-1);
    return 0;
}