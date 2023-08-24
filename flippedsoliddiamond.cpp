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
            cout << "*";
        }
        for (int j = 1; j <= 1 + (i - 1) * 2; j++)
        {
            if (j == 1 || j == 1 + (i - 1) * 2)
                cout << "*";
            else
                cout << " ";
        }
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = rows; i > 0; i--)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 1 + (i - 1) * 2; j++)
        {
            if (j == 1 || j == 1 + (i - 1) * 2)
                cout << "*";
            else
                cout << " ";
        }
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}