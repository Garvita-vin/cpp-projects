#include <iostream>
#include <windows.h>   // for Sleep()
using namespace std;

int main() {
    cout << "Rocket Launch Countdown Started..." << endl;

    for(int i = 5; i >= 1; i--) {
        cout << i << endl;
        Sleep(1000);   // 1000 milliseconds = 1 second
    }

    cout << "🚀 Rocket Launched Successfully!" << endl;

    return 0;
}
