// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, i,sum=0;
//     cout << "enter the value of n : ";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         sum=sum+i; //sum of all natural number
//     }
//     cout << sum <<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, i,sum=0;
//     cout << "enter the value of n : ";
//     cin >> n;
//     for (i = 1; i <= n; i=i+2)
//     {
//         sum=sum+i; //sum of all odd natural number
//     }
//     cout << sum <<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, i, sum = 0;
//     cout << "enter the value of n : ";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             sum = sum + i; //sum of all odd number
//         }
//     }
//     cout << sum << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, sum = 0;
//     cout << "enter the value of n : ";
//     cin >> n;
//     int i=1;
//     while ( i <= n )
//     {
//         if (i % 2 != 0)
//         {
//             sum = sum + i; //sum of all odd number
//         }
//         i++;
//     }
//     cout << sum << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "enter the value of n : ";
    cin >> n;
    int i=1;
    while ( i <= n )
    {
        if (i % 3 == 0)
        {
            sum = sum + i; //sum of all number divisible by 3
        }
        i++;
    }
    cout << sum << endl;
    return 0;
}