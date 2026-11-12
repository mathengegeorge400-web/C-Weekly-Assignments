// George Muraguri
// CT101/G/29066/25
// Week 1 Task 2: Driving Test Result Evaluation System
#include <iostream>
using namespace std;

int main() {
    // Variables to store student details
    string name;
    double theory, practical;

    // Ask the user to enter the details
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter theory marks: ";
    cin >> theory;
    cout << "Enter practical marks: ";
    cin >> practical;

    // Average = (Theory + Practical) / 2
    double average = (theory + practical) / 2;

    // Display the details
    cout << "\nName: " << name << endl;
    cout << "Theory: " << theory << endl;
    cout << "Practical: " << practical << endl;
    cout << "Average: " << average << endl;

    // The student passes if the average is 50 and above
    if (average >= 50)
        cout << "Result: Passed" << endl;
    else
        cout << "Result: Failed" << endl;
    return 0;
}