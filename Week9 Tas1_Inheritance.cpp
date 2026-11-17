// George Muraguri
// CT101/G/29066/25
// Week 9 Task 1: School Management System (Inheritance)
#include <iostream>
using namespace std;

// Base class
class Person {
protected:               // protected: the derived class can use these
    string name;
    int age;

public:
    // Input name and age
    void inputPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    // Display name and age
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class: Student inherits from Person
class Student : public Person {
    // Extra attributes of the student
    string admNo;
    string className;

public:
    void inputStudent() {
        inputPerson();              // uses the function inherited from Person
        cout << "Enter admission number: ";
        cin >> admNo;
        cout << "Enter class: ";
        cin >> className;
    }

    void displayStudent() {
        displayPerson();            // displays the inherited details first
        cout << "Admission number: " << admNo << endl;
        cout << "Class: " << className << endl;
    }
};

int main() {
    Student s;           // object of the derived class
    s.inputStudent();    // input all the details
    s.displayStudent();  // display all the details
    return 0;
}