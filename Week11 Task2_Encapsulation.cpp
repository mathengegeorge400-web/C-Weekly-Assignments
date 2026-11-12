// CT101/G/29066/25
// GEORGE MURAGURI
// Week 11 Task 2: Student Fee Security System (Encapsulation)
#include <iostream>
using namespace std;

class Student {
private:                 // private: the fee balance cannot be changed directly from main
    string name;
    string admNo;
    double feeBalance;

public:
    // Public function to input the student details
    void inputStudentData() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter admission number: ";
        cin >> admNo;
        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    // The balance can only be changed through this function
    void makePayment(double amount) {
        feeBalance = feeBalance - amount;
    }

    // Public function to display the status
    void displayStatus() {
        cout << "Name: " << name << endl;
        cout << "Admission number: " << admNo << endl;
        cout << "Fee balance: " << feeBalance << endl;
    }
};

int main() {
    Student s;
    double payment;

    s.inputStudentData();            // input the details

    cout << "Enter payment amount: ";
    cin >> payment;
    s.makePayment(payment);          // process the payment

    s.displayStatus();               // display the updated status
    return 0;
}