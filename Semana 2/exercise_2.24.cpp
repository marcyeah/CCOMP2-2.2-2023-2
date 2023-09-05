#include <iostream>
using namespace std;

int main(){
    int a, b;
    int sum = a + b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    if(sum % 2)
        cout << "The result of the addition is an odd number" << endl;
    else
        cout << "The result of the addition is not an odd number" << endl;
        
    return 0;
}