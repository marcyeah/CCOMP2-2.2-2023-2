#include <iostream>

using namespace std;

int main() {
    int arr[] = {15, 24, 30, 41, 55, 66};
    int tam = sizeof(arr) / sizeof(arr[0]);
    cout << tam << endl;

    cout << *arr << endl;
    int *ptr = arr;

    cout << *(ptr + 0) << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;

    cout << *(ptr + 5) << endl;
    cout << *(ptr + tam - 1) << endl;
}