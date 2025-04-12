// 1-D ARRAY
#include <iostream>
using namespace std;

int main()
{
    int numbers[5];

    cout << "Enter the numbers:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }

    cout << "Here's what you entered:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Number at index " << i << "=" << numbers[i] << endl;
    }

    return 0;
}

// // 2-D ARRAY
#include <iostream>
using namespace std;

int main()
{
    int matrix[2][3];
    cout << "Enter 6 numbers:" << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix is:" << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// 3-D ARRAY
#include <iostream>
using namespace std;

int main()
{
    int array[2][2][3];

    cout << "Enter 12 numbers:" << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cin>>array[i][j][k];
            }
        }
    }

    cout << "The 3-D array is:" << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << "Block" << i + 1 << endl;
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << array[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
