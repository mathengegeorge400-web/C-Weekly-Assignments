// George Muraguri
// CT101/G/29066/25
// Week 6 Task 2: Student Fee Management System (Classes and Objects)
#include <iostream>
using namespace std;

// Class Student with its data and functions
class Student {
    // Attributes
    string name;
    string admNo;
    double balance;

public:
    // Function to input the student details
    void inputStudent() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter admission number: ";
        cin >> admNo;
        cout << "Enter fee balance: ";
        cin >> balance;
    }

    // Function to reduce the balance when a payment is made
    void makePayment(double amount) {
        balance = balance - amount;
    }

    // Function to display the details and the remaining balance
    void displayStatus() {
        cout << "Name: " << name << endl;
        cout << "Admission number: " << admNo << endl;
        cout << "Fee balance: " << balance << endl;
    }
};

int main() {
    Student s;            // create an object
    double payment;

    s.inputStudent();     // input the student details

    cout << "Enter payment amount: ";
    cin >> payment;
    s.makePayment(payment);    // process the payment

    s.displayStatus();         // display the updated status
    return 0;
}