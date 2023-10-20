#include <iostream>
#include <array>

using namespace std;

int sumElemenArray (const int arr[], int tam){
    if(tam < 1)
        return 0;
    else
        return arr[tam-1] + sumElemenArray(arr, tam-1);
}

void imprimir(const int arr[], int tam){
    for (int i = 0; i < tam; i++) {
        cout << " " << arr[i];
    }
    cout << endl;
}

void imprimir_rec(const int arr[], int tam, int i = 0){
    if(tam == 0)
        return;
    cout << arr[i] << " ";
    imprimir_rec(arr, tam-1, ++i);
}

int main() {
    int arr[4] = {1, 2, 3, 4};

    cout << sumElemenArray(arr, 4) << endl;
    imprimir(arr, 4);
    imprimir_rec(arr, 4);
}