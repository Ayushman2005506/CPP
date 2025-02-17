#include <iostream>
using namespace std;

class Car{
    public:
    Car(string b){
        cout<<"The brand of car is:"<<b<<endl;
    }

    ~Car(){
        cout<<"Destructor called!";
    }

};

int main(){

    Car obj();
    return 0;
}
