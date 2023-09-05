#include <iostream>
using namespace std;

int main(){
    float weight, height;
    char conversion;

    cout << "Introduce the kind of conversion you want a(pounds - inches) or b(kilograms - meters): ";
    cin >> conversion;

    if(conversion == 'a'){
        cout << "Introduce your weight(lb): ";
        cin >> weight;
        cout << "introduce your height(in): ";
        cin >> height;
        cout << endl;
        cout << weight * 703 / (height * height) << endl;
    }

    else{
        cout << "Introduce your weight(kg): ";
        cin >> weight;
        cout << "introduce your height(mt): ";
        cin >> height;
        cout << endl;
        cout << weight / (height * height) << endl;
    }

    cout << "BMI VALUES\nUnderweight:\tless than 18.5\nNormal:\t\tbetween 18.5 and 24.9\nOverweight:\tbetween 25 and 29.9\nObese:\t\t30 or greater" << endl;

    return 0;
}