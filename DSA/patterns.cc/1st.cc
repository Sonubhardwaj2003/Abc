// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, m, n;
//     cout << "enter the value of n: ";
//     cin >> n;

//     cout << "enter the value of m: ";
//     cin >> m;

//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= m; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, j, m, n;
//     cout << "enter the value of n: ";
//     cin >> n;

//     cout << "enter the value of m: ";
//     cin >> m;

//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= m; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int i, j, m, n;
    cout << "enter the value of n: ";
    cin >> n;

    cout << "enter the value of m: ";
    cin >> m;

    for (i = 1; i <= n; i++)
    {
        char ch='A';
        for (j = 1; j <= m; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}