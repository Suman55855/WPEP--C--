#include <iostream>
#include <string>
using namespace std;

struct Patient
{
    int id;
    int gender;
    int age;
};

void print_gender(Patient patients[], int n)
{
    int male = 0;
    int female = 0;

    for (int i = 0; i < n; ++i)
    {
        if (patients[i].gender == 1)
        {
            male++;
        }
        else if (patients[i].gender == 2)
        {
            female++;
        }
    }

    cout << male << " " << female << endl;
}

void print_age(Patient patients[], int n)
{
    cout << "Patients above 40 years: " << endl;
    for (int i = 0; i < n; ++i)
    {
        if (patients[i].age > 40)
        {
            cout << "ID: " << patients[i].id << ", Age: " << patients[i].age << endl;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the No. of patients: ";
    cin>>n;

    if (n > 50) {
        cout << "Error: No. of patients should not exceed 50." << endl;
        return 1;
    }

    Patient patients[50];

    for (int i = 0; i < n; ++i) {
        cout << "Enter details of patient " << i + 1 << " (id gender age): ";
        cin >> patients[i].id >> patients[i].gender >> patients[i].age;
    }

    print_gender(patients, n);

    print_age(patients, n);

    return 0;
}
