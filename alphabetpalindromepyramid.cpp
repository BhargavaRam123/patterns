#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        char var = 'A';
        for (int j = 1; j <= (i - 1) * 1; j++)
        {
            cout << var << " ";
            var += 1;
        }
        cout << var;
        for (int j = 1; j <= (i - 1) * 1; j++)
        {
            var -= 1;
            cout << " " << var;
        }
        cout << endl;
    }

    return 0;
}