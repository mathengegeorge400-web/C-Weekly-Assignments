// GEOERGE MURAGURI
// CT101/G/29066/25
// Week 3 Task 1: Payroll System using functions
#include <iostream>
using namespace std;

// Function to get the employee details
// The & means the values are sent back to main
void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours) {
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter basic salary: ";
    cin >> basicSalary;
    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}

// Overtime Pay = Overtime Hours x Rate Per Hour
double calculateOvertimePay(double overtimeHours) {
    double ratePerHour = 500;          // assumed rate per hour
    return overtimeHours * ratePerHour;
}

// Net Salary = Basic Salary + Overtime Pay
double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

// Function to print the payslip
void displayPayslip(string name, double basicSalary, double overtimeHours,
                    double overtimePay, double netSalary) {
    cout << "\n--- PAYSLIP ---\n";
    cout << "Name: " << name << endl;
    cout << "Basic salary: " << basicSalary << endl;
    cout << "Overtime hours: " << overtimeHours << endl;
    cout << "Overtime pay: " << overtimePay << endl;
    cout << "Net salary: " << netSalary << endl;
}

int main() {
    string name;
    double basicSalary, overtimeHours;

    // Call the functions in a logical order
    getEmployeeDetails(name, basicSalary, overtimeHours);
    double overtimePay = calculateOvertimePay(overtimeHours);
    double netSalary = calculateNetSalary(basicSalary, overtimePay);
    displayPayslip(name, basicSalary, overtimeHours, overtimePay, netSalary);
    return 0;
}