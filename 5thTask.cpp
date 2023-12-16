#include <iostream>
#include <string>
using namespace std;

class dayOfWeek
{
private:
    int dayNum;

public:
    dayOfWeek(int num)
    {
        dayNum = num;
    }

    void printDay()
    {
        if (dayNum >= 1 && dayNum <= 7)
        {
            switch (dayNum)
            {
            case 1:
                cout << "Sunday";
                break;
            case 2:
                cout << "Monday";
                break;
            case 3:
                cout << "Tuesday";
                break;
            case 4:
                cout << "Wednesday";
                break;
            case 5:
                cout << "Thursday";
                break;
            case 6:
                cout << "Friday";
                break;
            case 7:
                cout << "Saturday";
                break;
            }
        }
        else if (dayNum == 0)
        {
            cout << "Weekend";
        }
        else
        {
            cout << "Invalid";
        }
    }
};

int main()
{
    int inputDay;
    cout << "Enter a number representing a day of the week: ";
    cin >> inputDay;
    
    dayOfWeek day(inputDay);
    
    cout<<"The Name of the Day is: \"";
    day.printDay();
    cout<<"\"";

    return 0;
}
