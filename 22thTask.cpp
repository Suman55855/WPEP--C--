#include<iostream>
using namespace std;

class IndiaBix{
    int *p;
    public:
    IndiaBix(int xx, char ch)
    {
        p = new int();
        *p = xx + int (ch);
        cout <<*p;
    }
    ~IndiaBix()
    {
        delete p;
    }
};

int main()
{
    IndiaBix objBix(10, 'B');
    return 0;
}