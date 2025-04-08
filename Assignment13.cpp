// VIRTUAL FUNCTIONS

#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculateSalary()
    {
        cout << "Calculating employee salary" << endl;
    }
};

class Developer : public Employee
{
public:
    void calculateSalary() override
    {
        cout << "Calculating developer salary with bonus" << endl;
    }
};

int main()
{
    Employee *e = new Developer;
    e->calculateSalary();

    return 0;
}



// PURE VIRTUAL FUNCTIONS

#include <iostream>
using namespace std;

class Appliance
{
public:
    virtual void turnOn() = 0;
};

class Fan : public Appliance
{
public:
    void turnOn() override
    {
        cout << "Fan is spinning!" << endl;
    }
};

int main()
{
    Appliance *a1 = new Fan();

    a1->turnOn();

    delete a1;

    return 0;
}
