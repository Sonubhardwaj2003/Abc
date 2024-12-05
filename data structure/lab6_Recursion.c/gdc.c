#include <stdio.h>
int gcd(int n1, int n2)
{
    // int r;
    if (n2 != 0)
    {
        return gcd(n2, n1 % n2);
    }
    else
    {
        return n1;
    }
}
void main()
{
    int n1, n2;
    printf("enter the value of n1 : ");
    scanf("%d", &n1);
    printf("enter the value of n2 : ");
    scanf("%d", &n2);

    printf("gdc of numbers is =%d", gcd(n1, n2));
    // return 0;
}