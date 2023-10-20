#include <iostream>
using namespace std;

void imprimir(const int arr[], int tam){
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void intercambio(int &a, int &b){
    int tmp = a;
        a = b;
        b = tmp;
}

void invertir_rec(int arr[], int tam, int i = 0){
    if(i >= tam){
        return;
    }

    intercambio(arr[tam-1], arr[i]);
    invertir_rec(arr, --tam, ++i);
}

int main(){
    int arr[4] = {1, 2, 3, 4};

    imprimir(arr, 4);
    invertir_rec(arr, 4);
    imprimir(arr, 4);
}