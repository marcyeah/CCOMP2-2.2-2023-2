#include <iostream>
#include <cmath>

using namespace std;

bool prime(int64_t e){
    for(int64_t i = 2; i < e; i++){
        if(!(e % i)){
            return false;
        }
    }
    return true;
}

int main(){
    int64_t n;
    cout << "Enter a number: ";
    cin >> n;
    for(int64_t i = sqrt(n); i >= 2; i--){
        if(!(n % i) && prime(i)){
            cout << i << endl;
            break;
        }
    }
}