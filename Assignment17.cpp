//FUNCTION TEMPLATE
#include <iostream>
using namespace std;


template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    float f1 = 2.5f, f2 = 3.5f;
    
    cout << "Sum of integers: " << add(x, y) << endl;
    cout << "Sum of floats: " << add(f1, f2) << endl;
  

    return 0;
}


//CLASS TEMPLATE
#include <iostream>
using namespace std;

template <typename T>
class Simple {
public:
    T data;

    Simple(T val) {
        data = val;
    }

    void show() {
        cout << "Value: " << data << endl;
    }
};

int main() {
    Simple<int> obj1(100);
    Simple<char> obj2('X');
    Simple<string> obj3("Hi");

    obj1.show();
    obj2.show();
    obj3.show();

    return 0;
}
