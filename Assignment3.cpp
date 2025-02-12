#include <iostream>
using namespace std;

class employee
{

    string name;
    int age;
    double salary;

public:
    void getdata()
    {

        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the age: ";
        cin >> age;
        cout << "Enter the salary: ";
        cin >> salary;
    }

    void putdata()
    {

        cout << "Name of the employee is: " << name << endl;
        cout << "Age of the employee is: " << age << endl;
        cout << "Salary of the employee is: " << salary << endl;
    }
};

int main(){

    employee p;

    p.getdata();
    p.putdata();

    return 0;
}


