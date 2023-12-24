#include <iostream>
using namespace std;

int BixTest(int x, int y);
int BixTest(int x, int y, int z = 5);
int main()
{
    cout << BixTest(2, 4) << endl;
    return 0;
}
int BixTest(int x, int y)
{
    return x * y;
}
int BixTest(int x, int y, int z = 5)
{
    return x * y * z;
}