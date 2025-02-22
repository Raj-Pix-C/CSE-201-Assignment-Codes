#include <iostream>
#include <string>
using namespace std;

class Money {
private:
    string money;
    long double total;
    int dollar, cent;

public:
    Money() : money(""), total(0.0), dollar(0), cent(0) {}
    ~Money() = default;

    void mstold(string m) {
        string temp;
        money = m;
        for (auto& x : m) {
            if (x == '$' || x == ',') continue;
            temp.push_back(x);
        }
        total = stold(temp);
    }

    void display() const {
        cout << total << endl;
    }
};

int main() {
    while (true){
        string temp;
        cin >> temp;
        Money m1;
        m1.mstold(temp);
        m1.display();

        cout << "\nAgain?(y/n) ";
        char c; cin >> c;
        if(tolower(c) != 'y')return 0;
    }
}