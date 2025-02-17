#include <iostream>
using namespace std;

// Static Polymorphism (Function Overloading)
class StaticPoly {
public:
    void show() {
        cout << "No parameters" << endl;
    }
    void show(int x) {
        cout << "Integer parameter: " << x << endl;
    }
    void show(double x) {
        cout << "Double parameter: " << x << endl;
    }
};

// Static Polymorphism (Operator Overloading)
class OperatorOverload {
public:
    int value;
    OperatorOverload(int v) : value(v) {}
    OperatorOverload operator+(const OperatorOverload& obj) {
        return OperatorOverload(this->value + obj.value);
    }
};

// Dynamic Polymorphism (Base class & Derived class)
class Base {
public:
    virtual void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    // Function Overloading Example
    StaticPoly obj;
    obj.show();
    obj.show(5);
    obj.show(3.14);

    // Operator Overloading Example
    OperatorOverload a(10), b(20);
    OperatorOverload c = a + b;
    cout << "Operator Overloading result: " << c.value << endl;

    // Dynamic Polymorphism Example
    Base* basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;
    basePtr->display(); // Calls Derived class's display

    return 0;
}
