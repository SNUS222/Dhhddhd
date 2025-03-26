#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 3 == 0 && number % 5 == 0) {
        cout << "Divisible by both 3 and 5" << endl;
    } else {
        cout << "Not divisible by both 3 and 5" << endl;
    }

    return 0;
}
