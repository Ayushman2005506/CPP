#include <iostream>
using namespace std;

class Human {
public:
    void breathe() {
        cout << "Breathing like a normal human." << endl;
    }
};

class Teacher : virtual public Human {
public:
    void teach() {
        cout << "Teaching students." << endl;
    }
};

class Student : virtual public Human {
public:
    void study() {
        cout << "Studying hard (or pretending to)." << endl;
    }
};

class TeachingAssistant : public Teacher, public Student {
public:
    void assist() {
        cout << "Assisting in both teaching and learning." << endl;
    }
};

int main() {
    TeachingAssistant ta;
    ta.breathe();  // From Human
    ta.teach();    // From Teacher
    ta.study();    // From Student
    ta.assist();   // From TA

    return 0;
}
