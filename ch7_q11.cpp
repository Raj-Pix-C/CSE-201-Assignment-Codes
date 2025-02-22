#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Money {
private:
    string money;
public:
    Money() : money("") {}
    ~Money() = default;

    void mstold(string m) {
        auto pos = m.find('.');
        if (pos == string::npos) {
            pos = m.size();
        }
        for (int i = pos - 3; i > 0; i -= 3) {
            m.insert(i, ",");
        }
        money = "$" + m;
    }

    void display() const {
        cout << money << endl;
    }
};

int main() {
    while (true) {
        string temp;
        cin >> temp;
        Money m1;
        m1.mstold(temp);
        m1.display();

        cout << "\nAgain?(y/n) ";
        char c; cin >> c;
        if (tolower(c) != 'y') return 0;
    }
}