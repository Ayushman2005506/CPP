// COPY CONSTRUCTOR

#include <iostream>
using namespace std;

class Car
{
public:
    string brand;

    Car(string b)
    {
        brand = b;
    }

    Car(const Car &c)    // Copy constructor
    { 
        brand = c.brand;
        cout << "Copying brand: " << brand << endl;
    }
};

int main()
{
    Car c1("Audi");
    Car c2 = c1; // Copy constructor called
    return 0;
}




//DYNAMIC CONSTRUCTOR

#include <iostream>
#include <string>
using namespace std;

class Car{
    string *brand;
    public:
    Car(string &b){
        brand=&b;
        cout<<"Brand is:"<<*brand<<endl;
    }
};

int main(){
     string string_name="BMW";
    Car c1(string_name);
    return 0;

}

