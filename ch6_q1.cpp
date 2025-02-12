#include <iostream>
using namespace std;

class Int {
private:
    int value;

public:
    Int() : value(0) {}
    Int(int val) : value(val) {}
    void display() const {
        cout << value;
    }
    void add(const Int& x, const Int& y){
        value = x.value + y.value;
    }
};

int main() {
    Int result;
    Int var1(10), var2(20);
    result.add(var1, var2);
	result.display();
    return 0;
}