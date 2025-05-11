#include <iostream>
using namespace std;

int main() {
    int availableRooms = 5;
    double roomPrice = 100.0;
    int choice;

    do {

        cout << "\nHotel Management System Menu:" << endl;
        cout << "1. Show Available Rooms" << endl;
        cout << "2. Show Room Price" << endl;
        cout << "3. Show Room Price After Discount" << endl;
        cout << "4. Book a Room" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;


        switch (choice) {
            case 1:
                cout << "Available Rooms: " << availableRooms << endl;
                break;

            case 2:
                cout << "Room Price: $" << roomPrice << endl;
                break;

            case 3:
                cout << "Room Price After 10% Discount: $" << (roomPrice * 0.90) << endl;
                break;

            case 4:
                if (availableRooms > 0) {
                    availableRooms--;
                    cout << "Room booked successfully! Remaining rooms: " << availableRooms << endl;
                } else {
                    cout << "No rooms available. Booking failed." << endl;
                }
                break;

            case 5:
                cout << "Good day!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
