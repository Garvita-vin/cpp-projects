#include <iostream>
#include <windows.h>   // For Sleep()
#include <cstdlib>     // For rand()
#include <ctime>       // For time()

using namespace std;

int main() {
    int bike1 = 0, bike2 = 0;
    const int finishLine = 50;

    srand(time(0));  // random seed

    cout << "🏁 BIKE RACE STARTED 🏁\n\n";

    while (bike1 < finishLine && bike2 < finishLine) {

        bike1 += rand() % 5 + 1;   // random move 1–5
        bike2 += rand() % 5 + 1;

        if (bike1 > finishLine) bike1 = finishLine;
        if (bike2 > finishLine) bike2 = finishLine;

        cout << "Bike 1: ";
        for (int i = 0; i < bike1; i++)
            cout << "-";
        cout << "🏍️\n";

        cout << "Bike 2: ";
        for (int i = 0; i < bike2; i++)
            cout << "-";
        cout << "🏍️\n";

        cout << "-----------------------------\n";

        Sleep(700);  // delay
    }

    // Result
    if (bike1 == bike2)
        cout << "\n🤝 It's a TIE! Both bikes reached together.\n";
    else if (bike1 > bike2)
        cout << "\n🏆 Bike 1 WINS the race!\n";
    else
        cout << "\n🏆 Bike 2 WINS the race!\n";

    return 0;
}
