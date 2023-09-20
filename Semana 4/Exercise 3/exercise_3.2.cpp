#include <iostream>

using namespace std;

int main(){
    int n;
    int sum;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = i/2; j > 0; j--){
            if(!(i % j)){
                sum += j;
            }
        }
        if(sum == i){
            cout << i << endl;
        }
        sum = 0;
    }
    return 0;
}