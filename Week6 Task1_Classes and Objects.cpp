// George Muraguri
// CT101/G/29066/25
// Week 6 Task 1: Library Book Management System (Classes and Objects)
#include <iostream>
using namespace std;

// Class Book with its data and functions
class Book {
    // Attributes (private by default)
    string title;
    string author;
    int copies;

public:
    // Function to input the book details
    void inputDetails() {
        cout << "Enter book title: ";
        cin >> title;
        cout << "Enter author: ";
        cin >> author;
        cout << "Enter number of copies: ";
        cin >> copies;
    }

    // Function to reduce the copies when a book is borrowed
    void borrowBook() {
        if (copies > 0)
            copies--;                       // reduce by one
        else
            cout << "No copies available" << endl;
    }

    // Function to display the book information
    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies available: " << copies << endl;
    }
};

int main() {
    Book b;               // create an object of the class

    b.inputDetails();     // input the book details
    b.borrowBook();       // borrow a book
    b.displayDetails();   // display the updated details
    return 0;
}