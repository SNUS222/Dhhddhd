#include <iostream>
using namespace std;

int main() {
    int hour;

    cout << "Enter the hour (0-23): ";
    cin >> hour;

    if (hour >= 0 && hour < 6) {
        cout << "Night" << endl;
    } else if (hour >= 6 && hour < 12) {
        cout << "Morning" << endl;
    } else if (hour >= 12 && hour < 18) {
        cout << "Afternoon" << endl;
    } else if (hour >= 18 && hour < 24) {
        cout << "Evening" << endl;
    } else {
        cout << "Invalid hour! Please enter a number between 0 and 23." << endl;
    }

    return 0;
}
