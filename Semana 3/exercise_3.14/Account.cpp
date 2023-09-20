#include <iostream>
#include "Account.h"

using namespace std;

void displayAccount(Account accountToDisplay) {
        cout << "Account: " << accountToDisplay.getName() << " " << accountToDisplay.getLastName() << endl << "Account number: " << accountToDisplay.getAccountNumber() << "\nYour balance is $" << accountToDisplay.getBalance();
    }

int main(){
    Account account1{"Jane", "Green", 1763, 50};
    Account account2{"John", "Blue", 1284, -7};
    displayAccount(account1);
    cout << "\n\n";
    displayAccount(account2);

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance...";
    account1.deposit(depositAmount);

    cout << "\n\n";
    displayAccount(account1);
    cout << "\n\n";
    displayAccount(account2);

    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance...";
    account2.deposit(depositAmount);

    cout << "\n\n";
    displayAccount(account1);
    cout << "\n\n";
    displayAccount(account2);

    cout << "\n\nEnter withdrawal amount for account1: ";
    int with_draw_cash;
    cin >> with_draw_cash;
    cout << "Withdrawing " << with_draw_cash << " to account1 balance...";
    account1.withdraw(with_draw_cash);

    cout << "\n\nEnter withdrawal amount for account2: ";
    cin >> with_draw_cash;
    cout << "Withdrawing " << with_draw_cash << " to account1 balance...";
    account2.withdraw(with_draw_cash);

    cout << "\n\n";
    displayAccount(account1);
    cout << "\n\n";
    displayAccount(account2);
    cout << endl;

    return 0;
}