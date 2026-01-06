#include <iostream>
using namespace std;

int main() {
    string place;
    float amount, discount, finalAmount;

    cout << "Enter your location (Jaipur / Vaishali / Jagatpura): ";
    cin >> place;

    if (place == "Jaipur" || place == "Vaishali") {
        cout << "Enter total bill amount: ";
        cin >> amount;

        // 20% discount
        discount = amount * 0.20;
        finalAmount = amount - discount;

        cout << "\n--- NBC OFFER DETAILS ---" << endl;
        cout << "Location           : " << place << endl;
        cout << "Original Amount    : Rs. " << amount << endl;
        cout << "Discount (20%)     : Rs. " << discount << endl;
        cout << "Payable Amount     : Rs. " << finalAmount << endl;
    }
    else if (place == "Jagatpura") {
        cout << "\nSorry! NBC offer is NOT available in Jagatpura." << endl;
    }
    else {
        cout << "\nInvalid location entered." << endl;
    }

    return 0;
}
