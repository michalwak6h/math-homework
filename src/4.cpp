
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double input = 0;
    cout << "Enter a number: ";
    cin >> input;

    if (input > 0) {
        cout << "The square root of " << input << " is " << sqrt(input) << endl;
    } else {
        cout << "Invalid input. The square root of a negative number does not exist." << endl;
    }

    return 0;
}