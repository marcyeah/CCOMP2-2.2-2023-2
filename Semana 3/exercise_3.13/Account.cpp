#include <iostream>
#include "Account.h"

using namespace std;

void displayAccount(Account accountToDisplay) {
        cout << "account: " << accountToDisplay.getName() << " balance is $" << accountToDisplay.getBalance();
    }

int main(){
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};
    displayAccount(account1);
    cout << endl;
    displayAccount(account2);

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance...";
    account1.deposit(depositAmount);

    cout << "\n\n";
    displayAccount(account1);
    cout << endl;
    displayAccount(account2);

    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance...";
    account2.deposit(depositAmount);

    cout << "\n\n";
    displayAccount(account1);
    cout << endl;
    displayAccount(account2);

    cout << "\n\nEnter withdrawal amount for account1: ";
    int withdrawalAmount;
    cin >> withdrawalAmount;
    cout << "substracting " << withdrawalAmount << " to account1 balance...";
    account1.withdraw(withdrawalAmount);

    cout << "\n\nEnter withdrawal amount for account2: ";
    cin >> withdrawalAmount;
    cout << "substracting " << withdrawalAmount << " to account2 balance...";
    account2.withdraw(withdrawalAmount);

    cout << "\n\n";
    displayAccount(account1);
    cout << endl;
    displayAccount(account2);
    cout << endl;

    return 0;
}