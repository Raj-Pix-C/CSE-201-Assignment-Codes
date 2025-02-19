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
    Employee em;
    em.getdata();
    em.putdata();
    return 0;
}