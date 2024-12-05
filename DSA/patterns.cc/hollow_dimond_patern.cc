#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "enter the number of rows : ";
    cin >> n;
    //top part
    for (i = 0; i < n; i++)
    {
        // space outside
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout<<"* ";
        // inside space
        if (i != 0)
        {
            for (j = 1; j <= (2*i-1); j++)
            {
                cout << " ";
            }
            cout<<"* ";
        }
       
        cout << endl;
    }
    // bottom part
    for (i = n-2; i >=0; i--)  //also try with i=n-1
    {
        // space outside
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout<<"* ";
        // inside space
        if (i != 0)
        {
            for (j = 1; j <= (2*i-1); j++)
            {
                cout << " ";
            }
            cout<<"* ";
        }
       
        cout << endl;
    }

    return 0;
}