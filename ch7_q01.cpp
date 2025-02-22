#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution{
private:
    string s;
public:
    void in(){cin >> s;}
    void reverseit(){
        reverse(s.begin(), s.end());
    }
    void print()const{cout << s << endl;}
};
int main()
{
    Solution sol;
    sol.in();
    sol.reverseit();
    sol.print();
    return 0;
}