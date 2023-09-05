#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    cout << "Enter 3 numbers" << endl;
    cin >> n1 >> n2 >> n3;
    if(!n1 || !n2 || !n3){
        cout << "Arithmetic indetermination" << endl;
    }
    else if(!(n3 % n1) && !(n3 % n2)){
        cout << "The two first numbers are factors of the third one" << endl;
    }
    else 
        cout << "The two first numbers are not factors of the third one" << endl;

    return 0;
}