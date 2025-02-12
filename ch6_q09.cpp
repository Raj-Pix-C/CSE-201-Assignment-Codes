#include <iostream>
using namespace std;

class Fraction {
private:
    int num;
    int denum;

public:
    void input() {
        char slash;
        cin >> num >> slash >> denum;
    }

    void display() const {
        cout << num << "/" << denum;
    }

    void calc(const Fraction& n1,const Fraction& n2){
		num = n1.num*n2.denum+n2.num*n1.denum;
		denum = n1.denum*n2.denum;
	}
};

int main() {
    char choice;
    do {
        Fraction f1, f2, result;

        cout << "Enter the first fraction (a/b):" << endl;
        f1.input();
        cout << "Enter the second fraction (a/b):" << endl;
        f2.input();

        result.calc(f1, f2);

        result.display();
        cout << endl;

        cout << "Do you want to add another pair of fractions? (y/n): ";
        cin >> choice;
    } while (tolower(choice) == 'y');

    return 0;
}