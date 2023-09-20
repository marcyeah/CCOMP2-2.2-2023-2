#include <iostream>
#include <string>

using namespace std;

bool pal(int n){
    string num = to_string(n);

    int i = 0, 
    int j = num.length() - 1;
  
    while(i < j){
        if(num[i] != num[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    int max = 0;
    for(int i = 1000; i > 100; i--){
        for(int j = 1000; j > 100; j--){
            int mult = i * j;
            if(pal(mult) && mult > max){
                max = mult;
            }
        }
    }
  cout << max << endl;
  return 0;
}