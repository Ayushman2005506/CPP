#include <iostream>
using namespace std;

class number
{
    int a;

public:
    int prime();
};

int number::prime()
{

    cout << "Enter the number:";

    cin >> a;

    if (a == 0 || a == 1)
    {
        cout << "The number is neither prime nor composite";
    }

    bool is_prime = true;
    for (int i = 2; i <= a / 2; i++)
    {

        if (a % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime == true)
    {
        cout << "The number is prime";
    }

    else
    {
        cout << "The number is composite";
    }
}

int main()
{

    number p;
    p.prime();

    return 0;
}
