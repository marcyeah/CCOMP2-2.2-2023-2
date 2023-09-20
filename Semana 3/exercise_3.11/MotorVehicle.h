#include <iostream>
#include <string>

class MotorVehicle{
    public: 
        MotorVehicle(string carMake, string fuelType, int yearOfManufacture, string carColor, int engineCapacity){
            make = carMake; 
            ftype = fuelType;
            year = yearOfManufacture;
            color = carColor;
            capacity = engineCapacity;

        }

        void setMake(string carMake){
            make = carMake;  
        }
        void setFuelType(string fuelType){
            ftype = fuelType;
        }
        void setYear(int yearOfManufacture){
            year = yearOfManufacture;
        } 
        void setColor(string carColor){
            color = carColor;  
        }
        void setCapacity(int engineCapacity){
            capacity = engineCapacity;
        }

        string getMake() const{
            return make;
        }

        string getFuel() const{
            return ftype;
        }

        int getYear() const{
            return year;
        
        }

        string getColor() const{
            return color;
        }

        int getCapacity() const{
            return capacity;
        }

        void displayDetails() {
            cout << "\nMake: " << make << endl; 
            cout << "\nFuelType: " << ftype << endl;
            cout << "\nYearOfManufacture: " << year << endl;
            cout << "\nColor: " << color << endl;
            cout << "\nEngineCapacity: " << capacity << endl;
        }

    private:
        string make; 
        string ftype; 
        int year;
        string color; 
        int capacity;   
};