//Write a program in c++ to swap the values of variable a & b without using 3rd variable.
#include <iostream>
using namespace std;
class Swap {
private:
    int a, b;
public:
    void swap() {
        cout << "Enter the value of A and B:";
        cin >> a >> b;
        a=a+b;
        b=a-b;
        a=a-b;
    }
    void displayValues() const {
        cout << "The new value of A: " << a << endl;
        cout << "The new value of B: " << b << endl;
    }
};
int main() {
    Swap s;
    s.swap();
    s.displayValues();
    return 0;
}
