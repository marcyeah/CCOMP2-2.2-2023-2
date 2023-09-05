#include <iostream>
using namespace std;

int main(){
    float a, b, c, d, e;

    cout << "Enter the amount of kilometers traveled in the day: ";
    cin >> a;
    cout << "Enter the cost per gallon of gasoline: ";
    cin >> b;
    cout << "Enter the average of kilometers that can be traveled per gallon: ";
    cin >> c;
    cout << "Enter the cost of the parking fees per day: ";
    cin >> d;
    cout << "Enter the amount of tolls per day: ";
    cin >> e;

    cout << "The cost per day of driving is " << "S./ " << a / c * b + d + e << endl;

    return 0;
}