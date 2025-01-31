#include <iostream>
using namespace std;

class FracCalc {
private:
    int a, b, c, d;
    double r;

public:
    void input() {
        cout << "Enter the numbers in the following format a/b\n";
        cout << "Enter first number: ";
        char slash;
        cin >> a >> slash >> b;
        cout << "Enter second number: ";
        cin >> c >> slash >> d;
        menu();
    }

    void menu() {
        char op;
        cout << "Enter operand (+, -, *, /): ";
        cin >> op;
        switch(op) {
            case '+':
                r = static_cast<double>(a * d + b * c) / (b * d);
                cout << "Answer = " << r;
                break;
            case '-':
                r = static_cast<double>(a * d - b * c) / (b * d);
                cout << "Answer = " << r;
                break;
            case '*':
                r = static_cast<double>(a * c) / (b * d);
                cout << "Answer = " << r;
                break;
            case '/':
                r = static_cast<double>(a * d) / (b * c);
                cout << "Answer = " << r;
                break;
            default:
                cout << "Invalid operator!";
                break;
        }

        char ch;
        cout << endl << "Do another (y/n)? ";
        cin >> ch;
        if(ch == 'y' || ch == 'Y') {
            cout << endl;
            input();
        }
    }
};

int main() {
    FracCalc calc;
    calc.input();
    return 0;
}