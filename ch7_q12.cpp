#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

class bMoney {
private:
    long double amount;

    long double mstold(const string& m) {
        string temp;
        for (auto& x : m) {
            if (x == '$' || x == ',') continue;
            temp.push_back(x);
        }
        return stold(temp);
    }

    string ldtoms(long double amount) const {
        string result = to_string(amount);
        auto pos = result.find('.');
        if (pos == string::npos) {
            pos = result.size();
        }
        for (int i = pos - 3; i > 0; i -= 3) {
            result.insert(i, ",");
        }
        result = "$" + result;
        return result;
    }

public:
    bMoney() : amount(0.0) {}
    ~bMoney() = default;

    void getmoney(const string& m) {
        amount = mstold(m);
    }

    void putmoney() const {
        cout << ldtoms(amount) << endl;
    }

    bMoney madd(const bMoney& other) const {
        bMoney result;
        result.amount = amount + other.amount;
        return result;
    }
};

int main() {
    while (true) {
        string temp1, temp2;
        cout << "Enter first money amount: ";
        cin >> temp1;
        cout << "Enter second money amount: ";
        cin >> temp2;

        bMoney m1, m2, m3;
        m1.getmoney(temp1);
        m2.getmoney(temp2);
        m3 = m1.madd(m2);

        cout << "Sum: ";
        m3.putmoney();

        cout << "\nAgain? (y/n): ";
        char c; cin >> c;
        if (tolower(c) != 'y') return 0;
    }
}