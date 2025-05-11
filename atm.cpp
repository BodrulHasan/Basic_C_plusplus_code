
 #include <iostream>
   using namespace std;

int main() {
    int balance = 5000;
    int n, amount;

    do {

        cout << "\nATM Menu:" << endl;
         cout << "1. Check Balance" << endl;
        cout << "2. Withdraw Money" << endl;
            cout << "3. Deposit Money" << endl;
        cout << "4. Transfer Money" << endl;
         cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
         cin >> n;


          switch (n) {
            case 1:
                cout << "Current Balance: " << balance << " Tk" << endl;
                break;

            case 2:
                  cout << "Enter withdrawal amount: ";
                cin >> amount;
                if (amount > 500 && amount <= 5000) {
                     if (amount <= balance) {
                          balance -= amount;
                         cout << "Withdrawal successful! Remaining balance: " << balance << " Tk" << endl;
                    }  else {
                        cout << "Insufficient balance!" << endl;
                    }
                } else {
                      cout << "Invalid amount! You can withdraw between 500 and 5000 Tk." << endl;
                }
                 break;

            case 3:
                cout    << "Enter deposit amount: ";
                cin >> amount;
                if (amount > 0) {
                      balance += amount;
                    cout << "Deposit successful! New balance: " << balance << " Tk" << endl;
                } else {
                        cout << "Invalid deposit amount!" << endl;
                }
                break;

             case 4:
                 cout << "Transfer feature is not implemented yet!" << endl;
                break;

            case 5:
                     cout << "Have a good day!" << endl;
                break;

             default:
                  cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
        }

    } while (n != 5);


    return 0;
}
