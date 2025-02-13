#include <iostream>
using namespace std;

//Declaring and defining class
class multiply{
    public:
        int multiplyNum(int x,int y){
        return x*y;
    }
};

int main(){
    int num1,num2; //Creating variables

    cout<<"Enter two numbers:";
    cin>>num1>>num2;

    multiply p; //Object Creation

    cout<<"Product is:"<<p.multiplyNum(num1,num2); //Function call
    return 0;
}

