#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Random seed
    srand(time(0));

    // Random number between 1 to 100
    int rainChance = rand() % 100 + 1;

    cout << "Rain Chance Today: " << rainChance << "%\n\n";

    if (rainChance >= 70) {
        cout << "Heavy rain expected 🌧️\n";
        cout << "Advice: Do NOT go outside.\n";
    }
    else if (rainChance >= 30 && rainChance < 70) {
        cout << "Light rain possible 🌦️\n";
        cout << "Advice: You can go out, but take an umbrella.\n";
    }
    else {
        cout << "Sunny day ☀️\n";
        cout << "Advice: You can go outside safely.\n";
    }

    return 0;
}
