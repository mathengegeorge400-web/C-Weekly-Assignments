// GEORGE MURAGURI
// CT101/G/29066/25
// MOBILE RECEIPT
#include <iostream>
using namespace std;

int main() {
    // Variables to store the sale details
    string name, model;
    int quantity;
    double price;

    // Ask the user to enter the details
    cout << "Enter customer name: ";
    cin >> name;
    cout << "Enter phone model: ";
    cin >> model;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter price per phone: ";
    cin >> price;

    // Total Sales Amount = Quantity x Price per phone
    double total = quantity * price;

    // Display the receipt
    cout << "\n--- RECEIPT ---\n";
    cout << "Customer name: " << name << endl;
    cout << "Phone model: " << model << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price per phone: " << price << endl;
    cout << "Total amount: " << total << endl;
    return 0;
}