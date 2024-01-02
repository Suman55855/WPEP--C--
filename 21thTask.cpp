#include<iostream>
using namespace std;

class Bix{
    int x;
    public:
    Bix();
    void Show() const;
    ~Bix(){}
};

Bix::Bix()
{
    x = 5;
}
void Bix::Show() const{
    cout<<x;
}

int main(){
    Bix objB;
    objB.Show();
    return 0;
}