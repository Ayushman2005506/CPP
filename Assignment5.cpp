#include <iostream>
using namespace std;

inline void num(int x, int y)
{

   
    if (x > y)
    {
        cout << "First number is greater than second";
    }

    else
    {

        cout << "First number is smaller than second";
    }
}

int main()
{
    int x,y;

    cout << "Enter the first number:";
    cin >> x;
    cout << "Enter the second number:";
    cin >> y;


     num (x,y);

    return 0;
}
