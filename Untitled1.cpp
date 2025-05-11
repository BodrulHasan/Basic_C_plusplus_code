#include <iostream>
using namespace std;

int main() {
    int available_Rooms = 5;
        double roomPrice = 100.0;
    int n;

    do {

        cout << "\nHotel Management System Menu:" << endl;
        cout << "1. Show Available Rooms" << endl;
          cout << "2. Show Room Price" << endl;
        cout << "3. Show RoomPrice After Discount" << endl;
         cout << "4. Book a Room" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
          cin >> n;


        switch (n) {
            case 1:
                cout << "Available Rooms: " << available_Rooms << endl;
                break;

             case 2:
                cout << "Room Price: $" << roomPrice << endl;
                break;

               case 3:
                cout << "Room Price After 10% Discount: $" << (roomPrice * 0.90) << endl;
                break;

            case 4:
                if (available_Rooms > 0) {
                       available_Rooms--;
                    cout << "Room booked successfully! Remaining rooms: " << available_Rooms << endl;
                }   else {
                    cout << "No rooms available. Booking failed." << endl;
                }
                break;

            case 5:
                   cout << "Good day!" << endl;
                break;

            default:
                  cout << "Invalid choice! Please try again." << endl;
        }

    } while (n != 5);
       return 0;
}
