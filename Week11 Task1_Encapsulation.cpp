// George Muraguri
// CT101/G/29066/25
// Week 11 Task 1: Employee Data Protection System (Encapsulation)
#include <iostream>
using namespace std;

class Employee {
private:                 // private: cannot be accessed directly from outside the class
    string name;
    int id;
    double basicSalary;
    double netSalary;

public:
    // Public function to input and assign the private data
    void setEmployeeDetails() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    // Net Salary = Basic Salary + 0.10 x Basic Salary (10% allowance)
    void calculateSalary() {
        netSalary = basicSalary + 0.10 * basicSalary;
    }

    // Public function to display the details
    void displayEmployeeDetails() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Basic salary: " << basicSalary << endl;
        cout << "Net salary: " << netSalary << endl;
    }
};

int main() {
    Employee e;
    // The data can only be reached through the public functions
    e.setEmployeeDetails();
    e.calculateSalary();
    e.displayEmployeeDetails();
    return 0;
}