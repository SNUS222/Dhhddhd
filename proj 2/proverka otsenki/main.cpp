#include <iostream>
using namespace std;

int main() {
    int score; // ���� ��������

    // ������ ����� � ������������
    cout << "Enter the score (1-5): ";
    cin >> score;

    // �������� ����� � ����� ��������������� ������
    if (score == 5) {
        cout << "Excellent!" << endl;
    } else if (score == 4) {
        cout << "Good!" << endl;
    } else if (score == 3) {
        cout << "Satisfactory!" << endl;
    } else if (score == 2) {
        cout << "Unsatisfactory!" << endl;
    } else {
        cout << "Invalid score! Please enter a score between 1 and 5." << endl;
    }

    return 0;
}
