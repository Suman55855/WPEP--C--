#include<iostream>
#include<string>
using namespace std;

class SalesPerson{
    private: 
        int soldItems;

    
    public:
    SalesPerson(int items) : soldItems(items) {}

    void calculateCommission() {
        const int baseRate = 5;
        const int additionalRate = 10;
        const int threshold = 200;    
            
    int commission = 0;

        if (soldItems <= threshold) {
            commission = soldItems * baseRate;
        } else {
            commission = threshold * baseRate + (soldItems - threshold) * additionalRate;
        }

        cout << "The commission for selling " << soldItems << " items is Rs." << commission <<endl;
    }
};

int main(){

    SalesPerson salesPerson(360);
    
    salesPerson.calculateCommission();
    return 0;
}