#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main(){
    Invoice memory_card ("59D4A23a", "SanDisk 1TB Extreme microSDXC UHS-I Memory Card with Adapter - Up to 160MB/s, C10, U3, V30, 4K, A2, Micro SD - SDSQXA1-1T00-GN6MA", 10, 352, 0.75, 0);

    cout << "Serial number: " << memory_card.getNumber() << endl;
    cout << "Product description: " << memory_card.getDescription() << endl;
    cout << "Quantity: " << memory_card.getQuantity() << endl;
    cout << "Item Price: " << memory_card.getPrice() << endl;
    cout << "VAT: " << memory_card.getTax() << endl;

    cout << "\nIf you buy more than 10 items you will get a discount of 0.5%" << endl; 

    if (memory_card.getQuantity() > 10){
        memory_card.setDiscount(0.5);
        cout << "\nDiscount: " << memory_card.getDiscount() << endl;
    }
    else{
        cout << "\nYou don't have the requisites to have a discount" << endl;
    }

    cout << "\nThe total cost is: " << memory_card.getInvoiceAmount() << endl;

    return 0;
}