#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student() // DEFAULT CONSTRUCTOR
    {
        name = "unknown";
        age = 0;
    }

    Student(string n, int a) // PARAMETRIZED CONSTRUCTOR
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Name is:" << name << endl;
        cout << "Age is:" << age << endl;
    }
};

int main()
{
    Student s1;             // calls default constructor
    Student s2("John", 20); // calls parametrized constructor
    s1.display();
    s2.display();

    return 0;
}
