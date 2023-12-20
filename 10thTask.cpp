#include<iostream>
#include<iomanip>
using namespace std;

const float PI = 3.14;

struct Circle{
    double radius;
    double circumference;
    double area;
};

int main(){
    Circle garden;
    
    cout << "Enter the radius of the circular garden: ";
    cin >> garden.radius;
    
    if (garden.radius <= 0) {
        cout << "Error: Invalid radius. Please enter a positive number.\n";
        return 1; 
    }

    garden.circumference = 2*PI*garden.radius;
    garden.area = PI*garden.radius*garden.radius;

    cout << fixed << setprecision(2); 
    cout << "Circumference of the garden: " << garden.circumference << endl;
    cout << "Area of the garden: " << garden.area << endl;

    return 0;

}