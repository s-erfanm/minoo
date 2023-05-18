#include <iostream>

using namespace std;

const int MAX_SIZE = 20;

int main() {
    int x[MAX_SIZE], y[MAX_SIZE], z[MAX_SIZE];
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter " << n << " pairs of numbers:\n";
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "] = ";
        cin >> x[i];
        cout << "y[" << i << "] = ";
        cin >> y[i];

        z[i] = x[i] * y[i];
    }

    cout << "\nX\tY\tZ\n";
    for (int i = 0; i < n; i++) {
        cout << x[i] << "\t" << y[i] << "\t" << z[i] << endl;
    }

    return 0;
}
