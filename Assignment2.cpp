#include <iostream>
using namespace std;

class sub
{
public:
    int subtract(int x, int y);
};

int sub::subtract(int x, int y)
{

    return (x - y);
}

int main()
{

    int num1, num2;

    cout << "Enter two numbers:";
    cin >> num1 >> num2;

    sub p;

    cout << "Difference is:" << p.subtract(num1, num2);

    return 0;
}
