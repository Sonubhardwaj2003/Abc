#include <stdio.h>
int main()
{
    int n1, n2, n3, temp;
    printf("enter the size of first array:\n");
    scanf("%d", &n1);
    int a[n1];
    printf("enter the elements:\n");
    int i, j;
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the size of second array:\n");
    scanf("%d", &n2);
    int b[n2];
    printf("enter the elements:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    n3 = n1 + n2;
    int c[n3];
    for (i = 0; i < n1; i++)
        c[i] = a[i];

    for (i = 0; i < n2; i++)
        c[i + n1] = b[i];

    printf("after the merge array is:\n");

    for (i = 0; i < n3; i++)
        printf("%d ", c[i]);
    return 0;
}