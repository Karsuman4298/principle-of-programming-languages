// WAP in cpp to implement default, parameterized, copy, default argument constructor and destructor using constructor overloading.

#include <iostream>
using namespace std;
class MyClass {
private:
    int a, b;
public:
    // Default constructor
    MyClass() {
        a = 0;
        b = 0;
        cout << "Default Constructor called" << endl;
    }
    // Parameterized constructor
    MyClass(int x, int y) {
        a = x;
        b = y;
        cout << "Parameterized Constructor called with values: " << a << ", " << b << endl;
    }
    // Constructor with default arguments
    MyClass(int x) {
        a = x;
        b = 10;  // Default value for b
        cout << "Constructor with default argument called, a: " << a << ", b: " << b << endl;
    }
    // Copy constructor
    MyClass(const MyClass &obj) {
        a = obj.a;
        b = obj.b;
        cout << "Copy Constructor called, a: " << a << ", b: " << b << endl;
    }
    // Destructor
    ~MyClass() {
        cout << "Destructor called for a: " << a << ", b: " << b << endl;
    }

    // Method to display values
    void display() {
        cout << "a: " << a << ", b: " << b << endl;
    }
};
int main() {
    // Default constructor
    MyClass obj1;
    obj1.display();
    // Parameterized constructor
    MyClass obj2(5, 15);
    obj2.display();
    // Constructor with default argument
    MyClass obj3(7);
    obj3.display();
    // Copy constructor
    MyClass obj4 = obj2;
    obj4.display();
    // Destructor will be called automatically when objects go out of scope
    return 0;
}

/* OUTPUT:-
Default Constructor called
a: 0, b: 0
Parameterized Constructor called with values: 5, 15
a: 5, b: 15
Constructor with default argument called, a: 7, b: 10
a: 7, b: 10
Copy Constructor called, a: 5, b: 15
a: 5, b: 15
Destructor called for a: 5, b: 15
Destructor called for a: 7, b: 10
Destructor called for a: 5, b: 15
Destructor called for a: 0, b: 0 
*/
