#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int n1{1};
    int n2{2};
    int tsum{0};
    int sum;

    for(int i = 1; i <= n; i++){
        if(!(n1 % 2)){
            tsum += n1;
        }
        cout << n1 << " ";
        sum = n1;
        n1 = n2;
        n2 += sum;
        if(n1 >= 4000000){
            break;
        }
    }
    cout << "\nThe total fibonacci sum is: " << tsum << endl;

    return 0;
}