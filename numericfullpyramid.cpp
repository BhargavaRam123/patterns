#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows * 2 - 2 + (-i + 1) * 2; j++)
        {
            cout << " ";
        }
        int k = i;
        for (int j = 0; j < (i - 1) * 1; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << k;
        for (int j = 0; j < (i - 1) * 1; j++)
        {
            k--;
            cout << " " << k;
        }
        cout << endl;
    }

    return 0;
}