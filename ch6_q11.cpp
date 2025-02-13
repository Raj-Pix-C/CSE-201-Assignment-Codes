#include <iostream>
#include <algorithm>
using namespace std;

class Fraction {
	public:
		int num;
		int denum;

		void input() {
			char slash;
			cin >> num >> slash >> denum;
		}
	
		void display() const {
			cout << num << "/" << denum;
		}	
	};

class FracCalc {
private:
    Fraction a, b, r;

public:
    void input() {
		cout << "Enter first number: ";
		a.input();
		cout << "Enter second number: ";
		b.input();
        menu();
    }

    void menu() {
        char op;
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        switch(op) {
            case '+':
                r.num = a.num*b.denum+b.num*a.denum;
				r.denum = a.denum*b.denum;
                break;
            case '-':
				r.num = a.num*b.denum-b.num*a.denum;
				r.denum = a.denum*b.denum;
                break;
            case '*':
				r.num = a.num*b.num;
				r.denum = a.denum*b.denum;
                break;
            case '/':
				r.num = a.num*b.denum;
				r.denum = a.denum*b.num;
                break;
            default:
                cout << "Invalid operator!";
                break;
        }
		int gcd = __gcd(r.num, r.denum);
		r.num /= gcd;
		r.denum /= gcd;
		r.display();

        char ch;
        cout << endl << "Do another (y/n)? ";
        cin >> ch;
        if(tolower(ch) == 'y') {
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