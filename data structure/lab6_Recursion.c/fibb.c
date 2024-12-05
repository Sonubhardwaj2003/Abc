#include <stdio.h>
int fibo(int g)
{
    if (g == 1)
            return 0;
    else if(g==2)
            return 1;
    else{
        return fibo(g-1)+fibo(g-2);
}}
int main()
{
    int a;
    scanf("%d", &a);
    int c;
    c = fibo(a);
    printf("%d", c);
    return 0;
}