#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 1;
    int c = 2;
    int d = 3;
    int e = 4;

    cout << "Face lenght" << "\t\t" << "Surface area" << "\t\t" << "Volume" << endl;
    cout << "of cube (cm)" << "\t\t" << "of cube (cm^2)" << "\t\t" << "of cube (cm^3)" << endl;
    cout << a << "\t\t\t" << a*a*6 << "\t\t\t" << a*a*a << endl;
    cout << b << "\t\t\t" << b*b*6 << "\t\t\t" << b*b*b << endl;
    cout << c << "\t\t\t" << c*c*6 << "\t\t\t" << c*c*c << endl;
    cout << d << "\t\t\t" << d*d*6 << "\t\t\t" << d*d*d << endl;
    cout << e << "\t\t\t" << e*e*6 << "\t\t\t" << e*e*e << endl;

    return 0;
}