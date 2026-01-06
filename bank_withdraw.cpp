#include <iostream>
using namespace std;

int main() {
    float balance, withdraw;

    cout << "Enter available balance: ";
    cin >> balance;

    cout << "Enter amount to withdraw: ";
    cin >> withdraw;

    cout << "\n--- BANK TRANSACTION ---\n";

    if (withdraw <= balance) {
        balance = balance - withdraw;
        cout << "Withdrawal Successful!" << endl;
        cout << "Withdrawn Amount : Rs. " << withdraw << endl;
        cout << "Remaining Balance: Rs. " << balance << endl;
    }
    else {
        cout << "Insufficient Balance!" << endl;
        cout << "Available Balance: Rs. " << balance << endl;
    }

    return 0;
}
