#include <iostream>

using namespace std;

int main(){
    for(long long i = 2520; true; i += 20){
        bool div = true;
        for(int j = 1; j <= 20; j++){
            if(i % j){
                div = false;
                break;
            } 
        }
        if(div){
            cout << "The number is: " << i << endl;
        }
    }
  return 0;
}