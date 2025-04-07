#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() = 0;
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Woof! Woof!"<<endl;
    }
};

class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Meow!"<<endl;
    }
};

int main()
{
    Dog d;
    Cat c;
    d.sound();
    c.sound();

    return 0;
}
