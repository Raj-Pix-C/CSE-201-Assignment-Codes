#include <iostream>
#include <algorithm>
using namespace std;

class Fraction {
public:
    int num;
    int denum;

    Fraction() : num(0), denum(1) {}

    void input() {
        char slash;
        cin >> num >> slash >> denum;
    }

    void display(){
        reduce();
        cout << num << "/" << denum;
    }

    Fraction add(const Fraction& other) const {
        Fraction result;
        result.num = num * other.denum + other.num * denum;
        result.denum = denum * other.denum;
        return result;
    }

    void reduce() {
        int gcd = __gcd(num, denum);
        num /= gcd;
        denum /= gcd;
    }
};

class FracCalc {
private:
    Fraction* fractions;
    int size;

public:
    FracCalc(int s) : size(s) {
        fractions = new Fraction[size];
    }

    ~FracCalc() {
        delete[] fractions;
    }

    void input() {
        for (int i = 0; i < size; ++i) {
            fractions[i].input();
        }
    }

    Fraction average(){
        Fraction sum;
        for (int i = 0; i < size; ++i) {
            sum = sum.add(fractions[i]);
        }
        sum.denum *= size;
        return sum;
    }

    void displayAverage() {
        Fraction avg = average();
        avg.display();
        cout << endl;
    }
};

int main() {
    int size = 4;
    FracCalc calc(size);
    calc.input();
    calc.displayAverage();
    return 0;
}