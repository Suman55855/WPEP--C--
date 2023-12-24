#include<iostream>
using namespace std;
static int b = 0;
void DisplayData(int *x, int *y = &b)
{
    cout<< *x << " " << *y;
}
int main()
{
    int a = 10, b = 20;
    DisplayData(&a, &b);
    return 0;
}