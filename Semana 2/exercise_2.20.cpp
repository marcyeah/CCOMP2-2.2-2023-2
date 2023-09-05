#include <iostream>
using namespace std;

int main(){
    float const pi = 3.15159;
    int radius;
    float diameter = pi * radius;
    float circumference = pi * diameter;
    float area = pi * radius * radius; 

    cout << "Enter the radius: " << endl;
    cin >> radius;
    cout << "The diameter of the circle is: " << diameter << endl;
    cout << "The circumference of the circle is: " << circumference << endl;
    cout << "The area of the circle is: " << area << endl;

    return 0; 
}