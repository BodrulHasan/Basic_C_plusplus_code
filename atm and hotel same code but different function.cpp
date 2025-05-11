#include<iostream>
using namespace std;

void runAtm() {
    int balance = 5000;
    int choice, amount;

    do {
        cout << "\nATM Menu:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Transfer Money" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current balance: " << balance << " TK" << endl;
                break;

            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                if (amount > 500 && amount <= 5000) {
                    if (amount <= balance) {
                        balance -= amount;
                        cout << "Withdrawal successful! Remaining balance: " << balance << " Tk" << endl;
                    } else {
                        cout << "Insufficient Balance!" << endl;
                    }
                } else {
                    cout << "Invalid Amount! You can withdraw between 500 and 5000 Tk." << endl;
                }
                break;

            case 3:
                cout << "Enter deposit amount: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit Successful! Your new balance: " << balance << " TK" << endl;
                } else {
                    cout << "Invalid deposit amount!" << endl;
                }
                break;

            case 4:
                cout << "Transfer feature is not implemented yet!" << endl;
                break;

            case 5:
                cout << "Have a good Day!" << endl;
                break;

            default:
                cout << "Invalid choice! Please enter a number between 1 to 5." << endl;
        }
    } while (choice != 5);
}

void runHotel() {
    const int TOTAL_ROOMS = 5;
    const double ROOM_PRICE = 100.0;
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
                cout << "Available Rooms: " << availableRooms << endl;
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
                cout << "Have a good day!" << endl;
                break;

            default:
                cout << "Invalid choice! Please enter a number between 1 to 5." << endl;
        }

    } while (choice != 5);
}

int main() {
    cout << "Please select the program you want to run:\n" << endl;
    cout << "1. ATM\n2. HOTEL\n3. Exit the program\n" << endl;
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            runAtm();
            break;
        case 2:
            runHotel();
            break;
        case 3:
            cout << "Exit The Program" << endl;
            break;
        default:
            cout << "Invalid choice! Please select 1, 2 or 3." << endl;
            break;
    }

    return 0;
}
