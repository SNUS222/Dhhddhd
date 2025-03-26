#include <iostream>
using namespace std;

int main() {
    int age; // Переменная для возраста

    // Запрос возраста у пользователя
    cout << "Enter your age: ";
    cin >> age;

    // Проверка, может ли человек водить машину
    if (age >= 18) {
        cout << "You can drive." << endl;  // Если возраст 18 лет или больше
    } else {
        cout << "You cannot drive." << endl;  // Если возраст меньше 18 лет
    }

    return 0;
}
