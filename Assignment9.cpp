
//FRIEND FUNCTION
#include <iostream>
using namespace std;

class person
{

private:
    string name;
    int age;

public:
    person(string n,int a){
        name=n;
        age=a;

    }
    friend void details(person p);
};
void details(person p)
{

    cout << "Person's name:" << p.name << endl;
    cout << "Person's age:" << p.age << endl;
}
int main()
{

    person p("Michael",19);
    details(p);

    return 0;
}





//FRIEND CLASS

#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int marks;

public:
    student(string n, int m)
    {
        name = n;
        marks = m;
    }

    friend class details;
};

class details
{
public:
    void show_data(student p)
    {
        cout << "Student's name:" << p.name << endl;
        cout << "Student's marks:" << p.marks << endl;
    }
};
int main()
{

    student p("John", 19);
    details f;
    f.show_data(p);

    return 0;
}
