#include <iostream>
using namespace std;

void zeroSmaller(int &a, int &b) {
    a < b ? a = 0: b = 0;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    zeroSmaller(num1, num2);

    cout << "After calling zeroSmaller, the numbers are: " << num1 << " and " << num2 << endl;

    return 0;
}