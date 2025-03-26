#include <iostream>
using namespace std;

int main() {
    float number; // ѕеременна€ дл€ хранени€ числа

    cout << "vvedite chislo: ";
    cin >> number; // ¬вод числа

    // ѕроверка числа на положительность, отрицательность или равенство нулю
    if (number > 0) {
        cout << "chislo polozitelnoe." << endl;
    } else if (number < 0) {
        cout << "chislo otrisatelnoe." << endl;
    } else {
        cout << "chislo ravno 0." << endl;
    }

    return 0;
}
