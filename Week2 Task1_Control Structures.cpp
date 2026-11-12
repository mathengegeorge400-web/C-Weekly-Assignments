// GEORGE MURAGURI
//CT101/G/29066/25
// Week 2 Task 1: Grading System using an if-else ladder
#include <iostream>
using namespace std;

int main() {
    string name;
    double marks;
    char grade;      // stores the grade letter

    // Ask the user to enter the details
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks: ";
    cin >> marks;

    // if-else ladder: the checks go from the highest grade to the lowest
    if (marks >= 70)
        grade = 'A';          // 70 - 100
    else if (marks >= 60)
        grade = 'B';          // 60 - 69
    else if (marks >= 50)
        grade = 'C';          // 50 - 59
    else if (marks >= 40)
        grade = 'D';          // 40 - 49
    else
        grade = 'E';          // below 40

    // Display the result
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}