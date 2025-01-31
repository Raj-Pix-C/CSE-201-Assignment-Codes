#include <iostream>
using namespace std;

double power(double n, int p = 2) {
    double result = 1.0;
    for (int i = 0; i < p; ++i) {
        result *= n;
    }
    return result;
}

int main() {
    double n;
    int p;

    cout << "Enter the base number: ";
    cin >> n;

    cout << "Enter the power (default is 2): ";
    cin >> p;

    double result = power(n, p);
    cout << n << " raised to the power of " << p << " is: " << result << endl;

    return 0;
}