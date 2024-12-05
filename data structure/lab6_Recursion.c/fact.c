#include <stdio.h>
int fact(int g)
{
    if (g >= 0)
    {
        if (g == 1 || g == 0)
            return 1;
        else
            return g * fact(g - 1);
    }
    else{
        printf("cannot be calculated of ");
        return g;
}}
int main()
{
    int a;
    scanf("%d", &a);
    int c;
    c = fact(a);
    printf("%d", c);
   return 0;
}