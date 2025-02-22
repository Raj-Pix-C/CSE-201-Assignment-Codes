#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
    string name;
    long long numb;
public:
    void getdata(){cin >> name >> numb;}
    void putdata()const{cout << name << endl << numb;}
};
int main()
{
    Employee em[100];
    for( int i = 0; i < 100; i++)
    em[i].getdata();
    for( int i = 0; i < 100; i++)
    em[i].putdata();
    return 0;
}