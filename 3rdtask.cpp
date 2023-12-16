#include <iostream>
#include <string>
using namespace std;

class Occurance
{
private:
    static const int max_char = 300;

    int charCount[max_char];

public:
    Occurance()
    {

        for (int i = 0; i < max_char; ++i)
        {
            charCount[i] = 0;
        }
    }
    void countOccurances(const string &str)
    {
        for (char ch : str)
        {
            ++charCount[static_cast<unsigned char>(ch)];
        }
    }

    void displayCountOccurances() const
    {
        for (int i = 0; i < max_char; ++i)
        {
            if (charCount[i] > 0)
            {
                cout << "Character '" << static_cast<char>(i) << "': " << charCount[i] << " times\n";
            }
        }
    }
};

int main()
{
    string inputString = "noon";

    Occurance charCounter;
    charCounter.countOccurances(inputString);
    charCounter.displayCountOccurances();

    return 0;
}
