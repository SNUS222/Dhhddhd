#include <iostream>
using namespace std;

int main() {
    double num1, num2; // Two numbers for the operation
    char op; // Operator

    // Ask the user for the first number, operator, and second number
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    // Perform the operation based on the input operator
    if (op == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } else if (op == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } else if (op == '*') {
        cout << "Result: " << num1 * num2 << endl;
    } else if (op == '/') {
        // Check for division by zero
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        } else {
            cout << "Error! Division by zero is not allowed." << endl;
        }
    } else {
        cout << "Error! Invalid operator." << endl;
    }

    return 0;
}

