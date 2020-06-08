#include <iostream>
#include <iomanip>

using namespace std;
//global variables
const double pi = 3.14159457;
void circumference(), area();

//functions and global/local variables
int main() {

    circumference();
    cout << "--------------------------- \n";
    area();

    return 0;

}

void circumference() {
    //local variables
    double c, r;
    cout << "Enter the radius for circumference: ";
    cin >> r;
    c = 2*pi*r;
    cout << "The circumference of the circle is: " << c << endl;
}

void area() {
    //local variables
    double a, r;
    cout << "Enter the radius for area: ";
    cin >> r;
    a = pi*r*r;
    cout << "The area of the circle is: " << a << endl;
}
