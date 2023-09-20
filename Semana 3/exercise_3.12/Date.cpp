#include<iostream>
#include <string>
#include "Date.h"

using namespace std;

int main(){
    Date birth1(15, 03, 2014);
    birth1.displayDate();

    Date birth2(07, 15, 2011); 
    birth2.displayDate();

    return 0;
}