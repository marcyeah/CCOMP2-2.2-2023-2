#include <iostream>
#include <string>

class Account {
    public:
        Account(std::string firstName, std::string lastName, unsigned int accountNumber, double initialBalance)
            : name(firstName), lname(lastName), number(accountNumber) {
            if (initialBalance > 0) {
                balance = initialBalance;
            }
        }

        void deposit(double depositAmount){
            if (depositAmount > 0){ 
                balance = balance + depositAmount; 
            }
        } 

        void withdraw(int withdrawalAmount) {
            if (withdrawalAmount > balance) {
                std::cout << "\nWithdrawal amount exceeded account balance.";
            }
            else
                balance = balance - withdrawalAmount;
        }

        double getBalance() const{
            return balance;   
        } 

        void setName(std::string firstName){
            name = firstName; 
        }  

        std::string getName() const{
            return name;
        }

        void setLastName(std::string lastName){
            lname = lastName;
        }

        std::string getLastName() const{
            return lname;
        }

        void setAccountNumber(unsigned int accountNumber){
            number = accountNumber;
        }

        unsigned int getAccountNumber() const{
            return number;
        }
        
    private:
        std::string name; 
        double balance{0};
        std::string lname;
        unsigned int number;
};