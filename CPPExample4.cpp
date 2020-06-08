#include <iostream>
#include <iomanip>

using namespace std;

//loops
int main() {

//for loop
    int i, j;
    for(i=0; i<=3; i++) {
        for(j=i; j<=3; j++) {
            cout << setw(4) << 1 << endl;
        }
        cout << "\n";
    }

//while loop
    int sum = 0, count = 0, x;
    cout << "Enter the number: \n";
    while(cin >> x) {
        sum = sum+x;
        count++;
    }
    cout << "The average of the numbers is: \t" << (sum/count);

    return 0;

}
