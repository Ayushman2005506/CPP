
#include <iostream>
using namespace std;

class Car
{
public:
    Car(string b)
    {

        cout << "The brand of car is:" << b << endl;
    }
};

int main()
{

    Car c1("BMW");
    Car c2("Toyota");

    return 0;
}
