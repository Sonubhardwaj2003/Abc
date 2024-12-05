#include <iostream>
using namespace std;
int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n;
    cout << "enter the value of n = ";
    cin >> n;
    cout << "factorial is = " << fact(n) << endl;
    return 0;
}