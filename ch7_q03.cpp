#include<iostream>
#include<string>
using namespace std;

class Distance {
private:
    int feet;
    int inches;
    int total;
public:
    Distance() : feet(0), inches(0), total(0){}
    
    void input() {
        cin >> feet;
        cin >> inches;
    }
    void display(){
        cout << feet << " feet " << inches << " inches";
    }
    void calc(const Distance& d1) {
        total += d1.feet * 12 + d1.inches;
    }
    void t_2_fi(){
        total /= 100;
        feet = total / 12;
        inches = total % 12;
    }
};

int main()
{
    Distance d[100], T;
    for(int j = 0; j < 100; j++){
        d[j].input();
        T.calc(d[j]);
    }
    T.t_2_fi();
    T.display();
    return 0;
}