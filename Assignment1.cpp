#include <iostream>
using namespace std;

class mul{

    public:
    int multiplynumbers(int x,int y){

        return x*y;
    }
};

int main(){
    int num1,num2;

    cout<<"Enter two numbers:";
    cin>>num1>>num2;

    mul p;

    cout<<"Product is:"<<p.multiplynumbers(num1,num2);
    return 0;
}

