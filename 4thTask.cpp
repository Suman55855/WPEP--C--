#include <iostream>
#include <string>
using namespace std;

class Occurrence
{
private:
    string str;
    char ch;

public:
    void initVariables()
    {
        cout << "Enter the string: ";
        getline(cin, str);

        cout << "Enter the character to count: ";
        cin >> ch;
    }
    
    int countOccurrence()
    {
        int count = 0;
        for (char c : str)
        {
            if (c == ch)
            {
                count++;
            }
        }
        return count;
    }
};

int main(){
    Occurrence occurrObj;

    occurrObj.initVariables();

    int result = occurrObj.countOccurrence();
    cout << "No. of occurrences: " << result <<endl;

    return 0;
}