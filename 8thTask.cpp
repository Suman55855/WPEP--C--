#include<iostream>
#include<string>
using namespace std;

void Profit(int& sp){
    double taxParcentage = 0.10;
    sp += sp * taxParcentage;
}

void Loss(int& sp){
    double taxParcentage = 0.20;
    sp += sp * taxParcentage;
}

int main(){
    int cp;
    int sp;
    cout<<"Enter the Cost Price and the Selling Price of the gadget: ";
    cin>>cp>>sp;

    if(sp>cp){
        Profit(sp);
        cout<<"Selling price after applying 10% tax: "<<sp<<endl;
    }else if(sp<cp){
        Loss(sp);
        cout<<"Selling price after applying 20% tax: "<<sp<<endl;
    }else{
        cout<<"No profit or loss. Selling price: "<<sp<<endl;
    }
    return 0;
}