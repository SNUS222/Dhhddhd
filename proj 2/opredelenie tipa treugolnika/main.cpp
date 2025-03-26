#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter the length of the first side: ";
    cin >> a;

    cout << "Enter the length of the second side: ";
    cin >> b;

    cout << "Enter the length of the third side: ";
    cin >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid input. Side lengths must be positive." << endl;
    } else if (a == b && b == c) {
        cout << "Equilateral triangle" << endl;
    } else if (a == b || b == c || a == c) {
        cout << "Isosceles triangle" << endl;
    } else {
        cout << "Scalene triangle" << endl;
    }

    return 0;
}
