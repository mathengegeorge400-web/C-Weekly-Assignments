// George Muraguri
// CT101/G/29066/25
// Week 8 Task 2: Hotel Room Booking System (Constructor and Destructor)
#include <iostream>
using namespace std;

class RoomBooking {
    // Attributes
    string guest;
    int roomNo;
    int days;

public:
    // Constructor: runs automatically when the object is created
    RoomBooking(string g, int r, int d) {
        guest = g;
        roomNo = r;
        days = d;
        cout << "Room booking confirmed" << endl;
    }

    // Function to show the booking details
    void displayBooking() {
        cout << "Guest name: " << guest << endl;
        cout << "Room number: " << roomNo << endl;
        cout << "Days booked: " << days << endl;
    }

    // Destructor: runs automatically when the object is destroyed
    ~RoomBooking() {
        cout << "Booking ended, room released" << endl;
    }
};

int main() {
    // Creating the object calls the constructor
    RoomBooking b("Peter", 204, 3);

    b.displayBooking();
    return 0;      // the destructor runs here
}