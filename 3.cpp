#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    char ch;
    long num = 0; // Change int to long to handle larger numbers
    int c = 1;

    cout << "Enter a number: ";

    while(c <= 6){
        ch = getche();
        num = num * 10 + (ch - '0');
        c++;
    }

    cout << endl << "Number is: " << num << endl; // Added endl to move to the next line after input
    return 0;
}