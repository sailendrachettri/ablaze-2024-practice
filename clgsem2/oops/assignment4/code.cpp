/*
Today: 07 - April 2024
Author: Sailendra Chettri
Purpose: Implement a class called BankAccount that represents a bank account 
*/
#include<iostream>
using namespace std;

class BankAccount{
    int accountNumber;
    string accountHolderName;
    double balance;

    public:
        BankAccount();
        BankAccount(int accountNumber, string accountHolderName);
        ~BankAccount();

        void deposit(double &amount);
        void withdraw(double &amount);
        void getBalance();
        void displayAccountInfo();
};

void BankAccount::deposit(double &amount){
    balance = (balance + amount);
}

void BankAccount::withdraw(double &amount){
    if(balance < amount){
        cout << "Insufficent balance." << endl;
        return;
    }

    cout << "\nAmount " << amount << " withdrawed from your account." << endl;
    balance = balance - amount;
}

void BankAccount::getBalance(){
    cout << "Available balance: " << balance << endl;
}

void BankAccount::displayAccountInfo(){
    cout << "\nAccount information: " << endl;
    cout <<"Account holder's name: " << accountHolderName << endl;
    cout <<"Current balance: " << balance << endl;
    cout << "Account number: " << accountNumber << endl;
}

BankAccount::BankAccount(){
    accountNumber = 0;
    accountHolderName = "";
    balance = 0.0;
}

BankAccount::BankAccount(int number, string name){
    balance = 0.0;
    accountHolderName = name;
    accountNumber = number;
}

BankAccount::~BankAccount(){
    cout << "Objected destroyed" << endl;
}

int main()
{
    cout << endl << endl;

    // boject creation
    BankAccount c1, c2(9083, "Sailendra");

    cout << "Customer 1: " << endl;
    double depositByC1 = 100.40;
    double withdrawByC1 = 40.40;
    c1.deposit(depositByC1);
    c1.getBalance();
    c1.displayAccountInfo();
    c1.withdraw(withdrawByC1); 
    c1.getBalance();

    cout << "\nCustomer 2: ";
    double depositByC2 = 200.40;
    double withdrawByC2 = 80.40;
    c2.deposit(depositByC2);
    c2.getBalance();
    c2.displayAccountInfo();
    c2.withdraw(withdrawByC2); 
    c2.getBalance();


    cout << "\n\n";
    


    




    cout << endl << endl;
    return 0;
}