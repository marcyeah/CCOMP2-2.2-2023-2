#include <iostream>
#include <cmath>

using namespace std;

bool prime(int64_t e){
    for(int64_t i = 2; i < sqrt(e); i++){
        if(!(e % i)){
            return false;
        }
    }
    return true;
}

int main(){
    long long sum = 0;
    for(int i = 2; i < 2000000; i++){
        if(prime(i)){
            sum += i;
        }
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}