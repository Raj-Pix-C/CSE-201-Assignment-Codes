#include<iostream>
using namespace std;

class Calculator {
    private:
    float a;
    float b;
    char o;
    float r;
    
    public:
    void printres(){
        switch(o){
        case '+':
            r = a+b;
            cout << "Answer = " << r ;
            break;
        case '-':
            r = a-b;
            cout << "Answer = " << r ;
            break;
        case '*':
            r = a*b;
            cout << "Answer = " << r ;
            break;
        case '/':
            r = a/b;
            cout << "Answer = " << r ;
            break;
        }
        char c;
        cout << endl << "Do another (y/n)? ";
        cin >> c;
        if(c == 'y'){
            input();
        }
    }
    
    void input(){
        cout << "Enter first number, operator, second number: ";
        cin >> a >> o >> b;
        cout << endl;
        printres();
    }
};


int main()
{
    Calculator clc1;
    clc1.input();
    
    return 0;
}