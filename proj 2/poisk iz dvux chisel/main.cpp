#include <iostream>
using namespace std;

int main() {
    double num1, num2; // ��� �����

    // ������ ����� � ������������
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // ��������� ����� � ����� ��������
    if (num1 > num2) {
        cout << "The greater number is: " << num1 << endl;
    } else if (num1 < num2) {
        cout << "The greater number is: " << num2 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}
