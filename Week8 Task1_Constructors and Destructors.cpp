// George Muraguri
//CT101/G/29066/25
// Week 8 Task 1: Bank Account System (Constructor and Destructor)
#include <iostream>
using namespace std;

class BankAccount {
    // Attributes
    string name;
    int accNo;
    double balance;

public:
    // Constructor: runs automatically when the object is created
    // It sets the values of the attributes
    BankAccount(string n, int a, double b) {
        name = n;
        accNo = a;
        balance = b;
        cout << "Account successfully created" << endl;
    }

    // Function to display the account details
    void displayAccount() {
        cout << "Name: " << name << endl;
        cout << "Account number: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }

    // Destructor: runs automatically when the object is destroyed
    // (it has the same name as the class with a ~ in front)
    ~BankAccount() {
        cout << "Account closed successfully" << endl;
    }
};

int main() {
    // Creating the object calls the constructor
    BankAccount acc("Jane", 12345, 25000);

    acc.displayAccount();
    return 0;      // the destructor runs here when the program ends
}