// SIMPLE INHERITANCE
#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "I can eat!" << endl;
    }

    void sleep()
    {
        cout << "I can sleep!" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "I can bark!" << endl;
    }
};

int main()
{
    Dog d;

    d.eat();
    d.sleep();
    d.bark();

    return 0;
}

// MULTIPLE INHERITANCE

#include <iostream>
using namespace std;

class Engine
{
public:
    void StartEngine()
    {
        cout << "Engine started!" << endl;
    }
};

class Music
{
public:
    void PlayMusic()
    {
        cout << "Playing music!" << endl;
    }
};

class Car : public Engine, public Music
{
public:
    void Drive()
    {
        cout << "Car is driving!" << endl;
    }
};

int main()
{
    Car c;

    c.Drive();
    c.PlayMusic();
    c.StartEngine();

    return 0;
}
