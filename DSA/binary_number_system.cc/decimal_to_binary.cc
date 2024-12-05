#include <iostream>
using namespace std;
int decimaltobinary(int num)
{
    int rem, pow = 1, ans = 0;
    while (num > 0)
    {
        rem = num % 2;
        num = num / 2;

        ans += (pow * rem);
        pow = pow * 10;
    }
    return ans;
}
int main()
{
    // int num =10;
    // cout << decimaltobinary(num) << endl;
    for (int i = 1; i <= 20; i++)
    {
        cout << decimaltobinary(i) << endl;
    }
    return 0;
}
