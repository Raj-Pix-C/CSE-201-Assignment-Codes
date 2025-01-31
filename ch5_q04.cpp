#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    Distance(int f = 0, float in = 0.0) : feet(f), inches(in) {}

    void input() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void display(){
        cout << feet << " feet " << inches << " inches";
    }
	void comp(const Distance& d1, const Distance& d2) {
        float dist1 = d1.feet * 12 + d1.inches;
        float dist2 = d2.feet * 12 + d2.inches;
        (dist1 > dist2) ? (feet = d1.feet, inches = d1.inches):(feet = d2.feet, inches = d2.inches);
    }
};

int main() {
    Distance d1, d2;

    cout << "Enter the first distance:" << endl;
    d1.input();
    cout << "Enter the second distance:" << endl;
    d2.input();
    Distance res;
	res.comp(d1, d2);
    cout << "The larger distance is: ";
    res.display();
    return 0;
}