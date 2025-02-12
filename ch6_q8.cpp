#include <iostream>
using namespace std;

class SerialNumber {
private:
    static int objCount;
    int serialNumber;

public:
    SerialNumber() {
        serialNumber = ++objCount;
    }

    void printSerial() const {
        cout << "This is object number " << serialNumber << endl;
    }
};

int SerialNumber::objCount = 0;

int main() {
    SerialNumber obj1, obj2, obj3;

    obj1.printSerial();
    obj2.printSerial();
    obj3.printSerial();

    return 0;
}