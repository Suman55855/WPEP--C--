#include <iostream>
using namespace std;

class Year {
public:
    enum Month {
        January = 1, February, March, April, May, June, July, August, September, October, November, December
    };
};

int main() {
    int monthNo;
    
    cout << "Enter a number representing a month: ";
    cin >> monthNo;

    if (monthNo >= 1 && monthNo <= 12) {
        Year::Month selectedMonth = static_cast<Year::Month>(monthNo);

        switch (selectedMonth) {
            case Year::January:
                cout << "The Month is 'January'.\n";
                break;
            case Year::February:
                cout << "The Month is 'February'.\n";
                break;
            case Year::March:
                cout << "The Month is 'March'.\n";
                break;
            case Year::April:
                cout << "The Month is 'April'.\n";
                break;
            case Year::May:
                cout << "The Month is 'May'.\n";
                break;
            case Year::June:
                cout << "The Month is 'June'.\n";
                break;
            case Year::July:
                cout << "The Month is 'July'.\n";
                break;
            case Year::August:
                cout << "The Month is 'August'.\n";
                break;
            case Year::September:
                cout << "The Month is 'September'.\n";
                break;
            case Year::October:
                cout << "The Month is 'October'.\n";
                break;
            case Year::November:
                cout << "The Month is 'November'.\n";
                break;
            case Year::December:
                cout << "The Month is 'December'.\n";
                break;
        }
    } else {
        cout << "Invalid Month No.\n";
    }

    return 0;
}
