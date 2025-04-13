#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    friend istream &operator>>(istream &in, Person &p);

    friend ostream &operator<<(ostream &out, const Person &p);
};

istream &operator>>(istream &in, Person &p)
{
    cout << "Enter name: ";
    in >> p.name;
    cout << "Enter age: ";
    in >> p.age;
    return in;
}

ostream &operator<<(ostream &out, const Person &p)
{
    out << "Name: " << p.name << ", Age: " << p.age;
    return out;
}

int main()
{
    Person p;
    cin >> p;
    cout << p << endl;
    return 0;
}
