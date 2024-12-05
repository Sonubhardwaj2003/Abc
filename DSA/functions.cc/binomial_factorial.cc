#include <iostream>
using namespace std;
int fact(int n,int r)
{
    int i, f = 1,a=1,b=1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    for (i = 1; i <= r; i++)
    {
        a = a * i;
    }for (i = 1; i <= (n-r); i++)
    {
        b = b * i;
    }
  return (f/(a*b));
}
int main()
{
    int n,r;
    cout << "enter the value of n = ";
    cin >> n;
    cout << "enter the value of r = ";
    cin >> r;
    cout << "factorial is = " << fact(n,r) << endl;
    return 0;
}