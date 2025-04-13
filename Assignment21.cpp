#include <iostream>
using namespace std;

class NumberHandler
{
public:
    int number;
    int *pointer;

    void setNumber(int n)
    {
        number = n;
        pointer = &number;
    }

    void printDetails()
    {
        cout << "Number:" << *pointer << endl;
        cout << "Address:" << pointer << endl;
    }
};

int main()
{
    NumberHandler obj;
    obj.setNumber(50);
    obj.printDetails();

    return 0;
}
