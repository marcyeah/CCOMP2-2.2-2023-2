#include <iostream>

using namespace std;

int main(){
    long long sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, res = 0;

    for(long long i = 1; i <= 100; i++){
        sum1 = i*i;
        sum2 += sum1;
    }

    for(long long i = 1; i <= 100; i++){
        sum3 += i;
        sum4 = sum3 * sum3;
    }

    cout << (sum4 - sum2) << endl; 

    return 0;
}