#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number >= 10 && number <= 50) {
        cout << "In the range" << endl;
    } else {
        cout << "Out of range" << endl;
    }

    return 0;
}
