#include <iostream>
#include <iomanip>

using namespace std;
//setw and setfill example
int main() {

    cout << "Without setfill: \n";
    cout << setw(10) << 11 << endl;
    cout << setw(10) << 234567 << endl;

    cout << "\nUsing setfill: " << endl;
    //fills the empty spaces with 0s
    cout << setfill('0') << endl;
    cout << setw(10) << 11 << endl;
    cout << setw(10) << 234567 << endl;


    return 0;

}
