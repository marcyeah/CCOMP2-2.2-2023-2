#include <iostream>

using namespace std;

int main() {
    int n{0};
    int p;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 1){
        for(int i = 2; i <= n-1; ++i){
            if(n % i == 0){
                p = 0;
                break;
            }
            p = 1;
        }
        if(p){
            cout << n << endl;
        }
        n--;
    }
}