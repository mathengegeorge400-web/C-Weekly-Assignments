//GEORGE MURAGURI
// CT101/G/29066/25
// Week 2 Task 3: Simple Calculator using a switch statement
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;          // stores the operator (+, -, *, /)

    // Ask the user to enter the values
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    // switch chooses what to do based on the operator entered
    switch (op) {
        case '+':
            cout << "Result = " << num1 + num2 << endl;
            break;                       // break stops the switch
        case '-':
            cout << "Result = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result = " << num1 * num2 << endl;
            break;
        case '/':
            // Check for division by zero before dividing
            if (num2 == 0)
                cout << "Error: cannot divide by zero" << endl;
            else
                cout << "Result = " << num1 / num2 << endl;
            break;
        default:
            // Runs when the operator is not one of the four
            cout << "Invalid operator" << endl;
    }
    return 0;
}