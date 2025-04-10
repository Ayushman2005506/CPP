#include <iostream>
using namespace std;

class Shape {
public:
    void draw() {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {  // Overrides Shape's draw()
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() {  // Overrides Shape's draw()
        cout << "Drawing a square" << endl;
    }
};

int main() {
    Shape s;
    Circle c;
    Square sq;

    s.draw();   // Output: Drawing a shape
    c.draw();   // Output: Drawing a circle
    sq.draw();  // Output: Drawing a square

    return 0;
}
