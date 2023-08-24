#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
            if (j != i)
            {
                cout << " ";
            }
        }

        for (int j = 1; j <= rows - i + 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = rows; i > 0; i--)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
            // if (j != i)
            // {
            //     cout << " ";
            // }
        }

        // for (int j = 1; j <= rows - i + 1; j++)
        // {
        //     cout << " ";
        // }
        cout << endl;
    }

    return 0;
}