#include <iostream>
using namespace std;

int main()
{
    int i, n;
    bool prime = true;
    cout << "enter the value to be check for prime : ";
    cin >> n;
    for (i = 2; i <= (n - 1); i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime == true)
    {
        cout << n << " is a prime number";
    }
    else
        cout << n << " is not a prime number";
    return 0;
}