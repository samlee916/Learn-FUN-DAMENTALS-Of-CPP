#include <iostream>
#include <iomanip>

using namespace std;

//switch statement
int main() {

    int i, a, b;
    cout << "Enter the first operand: ";
    cin >> a;
    cout << "Enter the second operand: ";
    cin >> b;
    cout << "Enter the number sequence for the operation \n";
    cout << "1. Addition \n";
    cout << "2. Subtraction \n";
    cout << "3. Multiplication \n";
    cout << "4. Division \n";
    cin >> i;
    switch(i) {
    case 1:
        cout << "Operand 1 + Operand 2 = " << (a+b);
        break;
    case 2:
        cout << "Operand 1 - Operand 2 = " << (a-b);
        break;
    case 3:
        cout << "Operand 1 * Operand 2 = " << (a*b);
        break;
    case 4:
        cout << "Operand 1 / Operand 2 = " << (a/b);
        break;
    default:
        cout << "No parameters match, parameter invalid!";
        break;
    }

    return 0;

}
