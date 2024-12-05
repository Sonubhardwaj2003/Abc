// Bubble Sort in C Program
#include <conio.h>
#include <stdio.h>
int main()
{
    int i, j, b, n, a[10];
    clrscr();
    printf("\nEnter The Limit : ");
    scanf("%d", &n);
    printf("\nEnter array Elements : n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n - 1; i++)
    {
        for (j = 1; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                b = a[j];
                a[j] = a[j + 1];
                a[j + 1] = b;
            }
        }
    }
    printf("\nThe Sorted Elements : \n");
    for (i = 1; i <= n; i++)
        printf(" %d ", a[i]);
    getch();
    return 0;
}