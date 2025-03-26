#include <iostream>
using namespace std;
int main() {
 int num;
 cout << "vvedite chislo: ";
 cin >> num;

 if (num % 2 == 0) {
 cout << "chetnoe " << endl;
 } else {
 cout << "nechetnoe" << endl;
 }
 return 0;
}
