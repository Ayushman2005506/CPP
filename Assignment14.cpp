#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v = 0) {
        value = v;
    }

    // Function Overloading
    void show() {
        cout << "Value is: " << value << endl;
    }

    void show(string label) {
        cout << label << value << endl;
    }

    // Operator Overloading: +
    Number operator+(Number other) {
        return Number(value + other.value);
    }
};

int main() {
    Number a(5), b(7);

    // Function overloading
    a.show();               // prints: Value is: 5
    b.show("B is: ");       // prints: B is: 7

    // Operator overloading
    Number c = a + b;       // uses overloaded +
    c.show("Sum is: ");     // prints: Sum is: 12

    return 0;
}
