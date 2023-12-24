#include <iostream>
using namespace std;

class Bix
{
    int x;

public:
    Bix();
    ~Bix();
    void Show() const;
};
Bix::Bix()
{
    x = 25;
}
void Bix::Show() const
{
    cout << x;
}
int main()
{
    Bix objB;
    objB.Show();
    return 0;
}