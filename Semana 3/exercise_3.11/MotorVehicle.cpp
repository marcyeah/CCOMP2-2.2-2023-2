#include<iostream>
#include <string>
#include "MotorVehicle.h"

using namespace std;

int main() {
    cout << "Hey, would you like to buy a vehicle from our catalogue? we have a plenty of cars..." << endl;

    MotorVehicle vehicle_1 ("Volkswagen", "92 Gasoline", 2022, "Red", 24000);
    cout << "\nDescription of the car" << endl;
    vehicle_1.displayDetails();
    cout << endl <<endl; 

    MotorVehicle vehicle_2 ("Ford", "Petroleum", 1995, "White", 2500);
    cout << "\nDescription of the car" << endl;
    vehicle_2.displayDetails();
    cout << endl <<endl;  

    MotorVehicle vehicle_3 ("Chevrolet", "87 Gasoline", 2014, "Black", 9000);
    cout << "\nDescription of the car" << endl;
    vehicle_3.displayDetails();
    cout << endl;
    return 0; 
}