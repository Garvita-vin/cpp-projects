#include <iostream>
using namespace std;

class Truck {
public:
    float km;

    // Function to input distance
    void input() {
        cout << "Enter distance travelled (in km): ";
        cin >> km;
    }

    // Bool operator overloading to compare distance
    bool operator < (Truck t) {
        return km < t.km;
    }
};

int main() {
    Truck t1, t2, temp;

    cout << "Truck 1\n";
    t1.input();

    cout << "Truck 2\n";
    t2.input();

    // Using bool operator and temp trick
    if (t1 < t2) {
        temp = t1;
        cout << "\nTruck 1 travelled LESS distance (" << temp.km << " km)." << endl;
    }
    else if (t2 < t1) {
        temp = t2;
        cout << "\nTruck 2 travelled LESS distance (" << temp.km << " km)." << endl;
    }
    else {
        cout << "\nBoth trucks travelled the SAME distance (" << t1.km << " km)." << endl;
    }

    return 0;
}
