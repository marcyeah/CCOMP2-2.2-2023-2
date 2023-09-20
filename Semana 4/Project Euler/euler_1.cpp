#include <iostream>

using namespace std;

int main(){
    int n;
    int sum{0};

    cout << "Enter a number: ";
    cin >> n;
    for(int i{n-1}; i > 0; i--){
        if(!(i % 5) || (!(i % 3))){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}