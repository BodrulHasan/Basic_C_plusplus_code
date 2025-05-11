#include <iostream>
using namespace std;

const int TOTAL_ROOMS = 5;
const double ROOM_PRICE = 100.0; // Fixed price of a room

int main() {
    int availableRooms = TOTAL_ROOMS;
    int choice;
    
    do {
        cout << "\nHotel Management System" << endl;
        cout << "1. Show Available Rooms" << endl;
        cout << "2. Show Room Price" << endl;
        cout << "3. Show Room Price After Discount" << endl;
        cout << "4. Book a Room" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Available rooms: " << availableRooms << endl;
                break;
            case 2:
                cout << "Room Price: $" << ROOM_PRICE << endl;
                break;
            case 3:
                cout << "Room Price After 10% Discount: $" << ROOM_PRICE * 0.9 << endl;
                break;
            case 4:
                if (availableRooms > 0) {
                    availableRooms--;
                    cout << "Room booked successfully! Remaining rooms: " << availableRooms << endl;
                } else {
                    cout << "Sorry, no rooms available." << endl;
                }
                break;
            case 5:
                cout << "Good day!" << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 5);
    
    return 0;
}
