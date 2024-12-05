// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, n;
//     cout << "enter the value of n : ";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n; j++)
//         {
//             cout << i<< " ";
//         }
//         cout << endl;
//     }
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, n;
//     cout << "enter the value of n : ";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n; j++)
//         {
//             cout << j<< " ";
//         }
//         cout << endl;
//     }
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, n;
//     cout << "enter the value of n : ";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n; j++)
//         {
//             cout << n-j+1 << " ";
//         }
//         cout << endl;
//     }
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, n;
//     cout << "enter the value of n : ";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         int num=i;
//         for (j = 1; j <= i; j++)
//         {
//             cout << num<< " ";
//             num++;
//         }
//         cout << endl;
//     }
// }


#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "enter the value of n : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        int num=i;
        for (j = 1; j <= i; j++)
        {
            cout << num<< " ";
            num--;
        }
        cout << endl;
    }
}