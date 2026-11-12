//George Muraguri
// CT101/G/29066/25
// Week 3 Task 2: Water Billing System using functions
#include <iostream>
using namespace std;

// Function to get the customer details
void getCustomerDetails(string &name, double &units) {
    cout << "Enter customer name: ";
    cin >> name;
    cout << "Enter units consumed: ";
    cin >> units;
}

// Water Bill = Units Consumed x Rate Per Unit
double calculateBill(double units) {
    double ratePerUnit = 50;           // assumed rate per unit
    return units * ratePerUnit;
}

// Gives a 10% discount if the customer used more than 100 units
double applyDiscount(double bill, double units) {
    if (units > 100)
        return bill * 0.10;            // returns the discount amount
    else
        return 0;                      // no discount
}

// Function to print the full bill
void displayBill(string name, double units, double bill, double discount) {
    cout << "\n--- WATER BILL ---\n";
    cout << "Customer: " << name << endl;
    cout << "Units consumed: " << units << endl;
    cout << "Bill before discount: " << bill << endl;
    cout << "Discount: " << discount << endl;
    cout << "Amount payable: " << bill - discount << endl;   // final amount
}

int main() {
    string name;
    double units;

    // Call the functions in order
    getCustomerDetails(name, units);
    double bill = calculateBill(units);
    double discount = applyDiscount(bill, units);
    displayBill(name, units, bill, discount);
    return 0;
}