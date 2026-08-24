#include <iostream>
using namespace std;

int main() {
    int ch;
    int balance = 1000;
    cin >> ch;
    switch (ch) {
        case 1:
            cout << "Balance: " << balance << endl;
            break;

        case 2: {
            int withdrawal;
            cin >> withdrawal;

            if (balance >= withdrawal) {
                balance -= withdrawal;
                cout << "Updated balance is: " << balance << endl;
            } else {
                cout << "Insufficient Balance" << endl;
            }
            break;
        }

        case 3: {
            int deposit;
            cin >> deposit;

            balance += deposit;
            cout << "Updated balance is: " << balance << endl;
            break;
        }

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
