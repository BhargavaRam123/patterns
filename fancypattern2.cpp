#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    int f;
    for (int i = 1; i <= rows; i++)
    {
        f = 0;
        for (int j = 1; j <= 1 + (i - 1) * 2; j++)
        {
            if (f == 0)
            {
                cout << i;
                f = 1;
            }
            else
            {
                cout << "*";
                f = 0;
            }
        }
        cout << endl;
    }
    for (int i = rows; i > 0; i--)
    {
        f = 0;
        for (int j = 1; j <= 1 + (i - 1) * 2; j++)
        {
            if (f == 0)
            {
                cout << i;
                f = 1;
            }
            else
            {
                cout << "*";
                f = 0;
            }
        }
        cout << endl;
    }

    return 0;
}