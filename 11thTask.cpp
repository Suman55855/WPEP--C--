#include<iostream>
#include<string>
using namespace std;

int main(){
    int a, b, c;

    cout<<"Enter the No.s: "<<endl;
    cin>>a>>b>>c;

    int num = (a>b)?((a>c)?a:c):((b>c)?b:c);
    cout<<"The Max No. is: "<<num<<endl;
    
    return 0;
}