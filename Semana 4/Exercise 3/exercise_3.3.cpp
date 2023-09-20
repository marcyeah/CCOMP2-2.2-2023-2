#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int n1{0};
    int n2{1};
    int sum;

    for(int i = 1; i <= n; i++){
        cout << n1 << " ";
        sum = n1;
        n1 = n2;
        n2 += sum;
    }

    return 0;
}