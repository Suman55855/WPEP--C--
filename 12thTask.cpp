#include<iostream>
#include<iomanip>
using namespace std;

struct Employee{
    int employeeID;
    char name[20];
    char DOB[11];
    char DOJ[11];
    float salary;
};

int main(){
    Employee emp;

    cout<<"Enter the Employee ID: ";
    cin>>emp.employeeID;

    cin.ignore();

    cout<<"Enter the Employee's Name: ";
    cin.getline(emp.name, 20);

    cout<<"Enter the Date of Birth: ";
    cin.getline(emp.DOB, 11);

    cout<<"Enter the Date of Joining: ";
    cin.getline(emp.DOJ, 11);

    cout<<"Enter the Salary: ";
    cin>>emp.salary;

    cout<<"\nEmployee ID: "<<emp.employeeID<<endl;
    cout<<"Employee Name: "<<emp.name<<endl;
    cout<<"Date of Birth: "<<emp.DOB<<endl;
    cout<<"Date of Joining: "<<emp.DOJ<<endl;
    cout<<"Salary: "<<fixed<<setprecision(1)<<emp.salary<<endl;

    return 0;
}
