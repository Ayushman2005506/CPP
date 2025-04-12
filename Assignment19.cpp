// MULTILEVEL INHERITANCE

#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Animal speaks!" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog barks!" << endl;
    }
};

class Puppy : public Dog
{
public:
    void weep()
    {
        cout << "Puppy weeps!" << endl;
    }
};

int main()
{
    Puppy p;
    p.speak();
    p.bark();
    p.weep();

    return 0;
}

// HIERARCHICAL INHERITANCE

#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Animal speaks!";
    }
};
class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat meows" << endl;
    }
};

class Cow : public Animal
{
public:
    void moo()
    {
        cout << "Cow moos" << endl;
    }
};

int main()
{

    Cat c;
    c.speak();
    c.meow();

    Cow cow;
    cow.speak();
    cow.moo();

    return 0;
}
