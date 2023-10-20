#include <iostream>

using namespace std;

int main() {
    int arr[] = {15, 24, 30, 41, 55, 66};
    int tam = sizeof(arr) / sizeof(arr[0]);

    int *ptr = arr;

    for(int i{0}; i < tam; i++){
        if(i == tam - 1)
            cout << *(ptr + tam - 1);
        else
            cout << *(ptr + i) << ", ";
    }
    cout << endl;
     for(int i{tam - 1}; i >= 0; i--){
        if(!i)
            cout << *(ptr);
        else
            cout << *(ptr + i) << ", ";
    }
    cout << endl;
}