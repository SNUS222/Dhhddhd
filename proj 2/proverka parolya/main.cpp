#include <iostream>
using namespace std;

int main() {
    string password = "secret123"; // �������� ������
    string user_input; // ��������� ������������� ������

    cout << "Enter password: ";
    cin >> user_input;

    if (user_input == password) {
        cout << "Access granted" << endl;
    } else {
        cout << "Incorrect password" << endl;
    }

    return 0;
}
