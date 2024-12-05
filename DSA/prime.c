#include <stdio.h>
int main()
{
    int n, i = 2, count = 0;
    printf("enter a no.to be check for prime \n");
    scanf("%d", &n);
    for (i = 2; i <= (n - 1); i++)
    {
        if (n % i == 0)
        {
            printf("%d is not a prime no.", n);
            break;
        }
        else
        {
            count++;
        }
    }
    if (count= 0)
    {
        printf("%d is  a prime no.", count);
    }
    return 0;
}
