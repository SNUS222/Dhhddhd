#include <iostream>
using namespace std;

int main() {
    int age; // ���������� ��� ��������

    // ������ �������� � ������������
    cout << "Enter your age: ";
    cin >> age;

    // ��������, ����� �� ������� ������ ������
    if (age >= 18) {
        cout << "You can drive." << endl;  // ���� ������� 18 ��� ��� ������
    } else {
        cout << "You cannot drive." << endl;  // ���� ������� ������ 18 ���
    }

    return 0;
}
