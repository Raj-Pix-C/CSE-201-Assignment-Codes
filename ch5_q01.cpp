#include <iostream>
using namespace std;

float circarea(float radius) {
    const float PI = 3.14159;
    return PI * radius * radius;
}

int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float area = circarea(radius);
    cout << "The area of the circle is: " << area << endl;

    return 0;
}