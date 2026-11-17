// George Muraguri
// CT101/G/29066/25
// Week 9 Task 2: Vehicle System (Inheritance)
#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:               // protected: the derived class can use these
    string brand;
    int year;

public:
    // Input brand and year
    void inputVehicle() {
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter year of manufacture: ";
        cin >> year;
    }

    // Display brand and year
    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

// Derived class: Car inherits from Vehicle
class Car : public Vehicle {
    // Extra attributes of the car
    int doors;
    double engine;

public:
    void inputCar() {
        inputVehicle();             // uses the function inherited from Vehicle
        cout << "Enter number of doors: ";
        cin >> doors;
        cout << "Enter engine capacity: ";
        cin >> engine;
    }

    void displayCar() {
        displayVehicle();           // displays the inherited details first
        cout << "Doors: " << doors << endl;
        cout << "Engine capacity: " << engine << endl;
    }
};

int main() {
    Car c;          // object of the derived class
    c.inputCar();   // input all the details
    c.displayCar(); // display all the details
    return 0;
}