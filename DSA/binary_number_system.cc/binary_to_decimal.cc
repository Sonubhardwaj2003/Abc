#include <iostream>
using namespace std;
int binarytodecimal(int num)
{
    int rem, pow = 1, ans = 0;
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;

        ans += (pow * rem);
        pow = pow * 2;
    }
    return ans;
}
int main()
{
    int num =10000000;
    cout << binarytodecimal(num) << endl;
    // for (int i = 1; i <= 20; i++)
    // {
    //     cout <<binarytodecimal(i) << endl;
    // }
    // return 0;
}
