#include <stdio.h>
float powe(float g,float n)
{
    if (n == 0)
         return 1;
    else if(n>0)
         return g * powe(g,n - 1);
    else
        return 1/(powe(g,-n));
}
int main()
{
    int a,b;
    scanf("%d%d", &a,&b);
    float c;
    c = powe(a,b);
    printf("%f", c);
    return 0;
}