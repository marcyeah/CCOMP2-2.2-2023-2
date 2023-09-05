#include <iostream>
using namespace std;

int main(){
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "The ascii value of the character is " << static_cast<int>(c) << endl;
    
    return 0;
}