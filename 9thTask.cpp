#include<iostream>
#include<string>
using namespace std;

int main(){
    int X, Y;

    cout << "Enter the number of adult tickets more than children tickets: ";
    cin >> X;

    cout << "Enter the total money in dollar made by Suzanne from ticket sales: $";
    cin >> Y;

    const int adultTicketCost = 5;
    const int childrenTicketCost = 2;
    const int seniorTicketCost = 3;

    int childrenTickets = ;

    int adultTickets = childrenTickets + X;

    int seniorTickets = 2 * childrenTickets;

    cout<<"Number of Childer's tickets sold: "<<childrenTickets<<endl;
    cout<<"Number of adult tickets sold: "<<adultTickets<<endl;
    cout<<"Number of senior tickets sold: "<<seniorTickets<<endl;

    return 0;
}