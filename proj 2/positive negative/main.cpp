#include <iostream>
using namespace std;

int main() {
    float number; // ���������� ��� �������� �����

    cout << "vvedite chislo: ";
    cin >> number; // ���� �����

    // �������� ����� �� ���������������, ��������������� ��� ��������� ����
    if (number > 0) {
        cout << "chislo polozitelnoe." << endl;
    } else if (number < 0) {
        cout << "chislo otrisatelnoe." << endl;
    } else {
        cout << "chislo ravno 0." << endl;
    }

    return 0;
}
