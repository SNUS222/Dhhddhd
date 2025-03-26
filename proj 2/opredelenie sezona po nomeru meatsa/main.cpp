#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Enter the month number (1-12): ";
    cin >> month;

    if (month == 12 || month == 1 || month == 2) {
        cout << "Winter" << endl;
    } else if (month >= 3 && month <= 5) {
        cout << "Spring" << endl;
    } else if (month >= 6 && month <= 8) {
        cout << "Summer" << endl;
    } else if (month >= 9 && month <= 11) {
        cout << "Autumn" << endl;
    } else {
        cout << "Invalid month number! Please enter a number between 1 and 12." << endl;
    }

    return 0;
}
