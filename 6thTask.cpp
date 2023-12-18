#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string gender;

public:
    void initialize()
    {
        cout << "Enter Name: ";
        getline(cin >> ws, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter gender: ";
        cin >> gender;
    }

    void display()
    {

        for (char &c : name)
        {
            c = toupper(c);
        }
        for (char &c : gender)
        {
            c = toupper(c);
        }

        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

int main()
{
    Person personObj;

    personObj.initialize();
    cout << "Person's Detail: "<<endl;
    personObj.display();
    return 0;
}