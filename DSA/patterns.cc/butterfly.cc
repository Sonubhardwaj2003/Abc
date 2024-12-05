#include <iostream>
using namespace std;

int main()
{
    int r, i, j;
    cout << "Enter no. of rows: ";
    cin >> r;
    // ypper part
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
            cout << "*";
        for (j = 1; j <= 2 * (r - i); j++)
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
    // lower part
    for (i = r; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            cout << "*";
        for (j = 1; j <= 2 * (r - i); j++)
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}