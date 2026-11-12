//GEORGE MURAGURI
// CT101/G/29066/25
// Week 2 Task 2: Admission Decision using nested if
#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    double score;

    // Ask the user to enter the details
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter exam score: ";
    cin >> score;

    // Outer if: check the age first
    if (age >= 18) {
        // Inner if: only checked when the age is 18 or above
        if (score >= 50)
            cout << "Admitted" << endl;
        else
            cout << "Not Admitted: Low Score" << endl;
    } else {
        // Age is below 18
        cout << "Not Admitted: Underage" << endl;
    }
    return 0;
}