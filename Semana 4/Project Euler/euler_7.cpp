#include <iostream>

using namespace std;

bool prime(int64_t e){
    if(e < 2){
        return false;
    }
    for(int64_t i = 2; i < e; i++){
        if(!(e % i)){
            return false;
        }
    }
    return true;
}

int main(){
    int cont{0};
    int res;
    for(int i = 1; true; i++){
        if(prime(i)){
            cont++;
        }
        if(cont >= 10001){
            res = i;
            break;
        }
    }
    cout << "The " << cont << "'st prime number is " << res << endl;
}