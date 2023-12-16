#include <iostream>
#include <string>
using namespace std;

class MobileShop
{
private:
    double mobilePrice;
    double powerBankPrice;

public:
    MobileShop(double mobilePrice, double powerBankPrice)
    {
        this->mobilePrice = mobilePrice;
        this->powerBankPrice = powerBankPrice;
    }
    void displayOptions() {
        cout << "Select an option:\n";
        cout << "1) Only Mobile,\n";
        cout << "2) Only Power Bank,\n";
        cout << "3) Mobile with Power Bank,\n";
        cout << "4) Nothing.\n";
    }
    
    void calculateDiscount(int choice) {
        double totalAmount = 0.0;

        switch (choice) {
            case 1:
                totalAmount = mobilePrice;
                break;
            case 2:
                totalAmount = powerBankPrice;
                break;
            case 3:
                totalAmount = mobilePrice + powerBankPrice;
                break;
            case 4:
                cout << "Thankyou for buying.\n";
                return;
            default:
                cout << "Invalid. Please select a valid option.\n";
                return;
        }

        double discount = (choice == 3) ? 0.1 : 0.05;
        double discountedAmount = totalAmount - (totalAmount * discount);

        cout << "Total Amount: " << totalAmount <<endl;
        cout << "Discount Applied: " << (discount * 100) << "%\n";
        cout << "Amount after Discount: " << discountedAmount <<endl;
    }
};

int main() {
    double mobilePrice = 120000; 
    double powerBankPrice = 5000;
    
    MobileShop mobileShop(mobilePrice, powerBankPrice);

    mobileShop.displayOptions();
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    
    if(choice==1){
    cout << "Mobile Price: 120000 "<<endl;
    }
    else if(choice==2){
    cout << "Power Bank Price: 5000"<<endl;   
    }
    else if(choice==3){
    cout << "Mobile Price: 120000 "<<endl;
    cout << "Power Bank Price: 5000"<<endl;
    }
    else{
        cout<<"Nothing to show."<<endl;
    }
   

    mobileShop.calculateDiscount(choice);
    return 0;
}