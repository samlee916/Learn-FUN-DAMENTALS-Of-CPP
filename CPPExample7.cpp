#include <iostream>
#include <iomanip>

using namespace std;
//if else statements
int main() {

    double speed, limit, exceed;
    cout << "Enter the speed: ";
    cin >> speed;
    cout << "Enter the limit: ";
    cin >> limit;
    exceed = speed - limit;
    if(exceed < 10) {
        cout << "You were lucky! \n";
    } else if(exceed < 20) {
        cout << "The fine is $20! \n";
    } else if(exceed < 50) {
        cout << "The fine is $80! \n";
    } else if(exceed >= 50 ) {
        cout << "Hand over your license! \n";
    }

    return 0;

}
