#include <iostream>
using namespace std;
// in this algorythm i find bigger number and count it one until it divide of two number .

int main() {
    int num1, num2, max;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }

    while (true) {
        if (max % num1 == 0 && max % num2 == 0) {
            cout << "LCM(" << num1 << "," << num2 << ") : " << max << endl;
            break;
        }
        ++max;
    }

    return 0;
}
