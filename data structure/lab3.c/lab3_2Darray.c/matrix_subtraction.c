#include <stdio.h>
void main()
{
    int n, i, j;
    printf("Enetr the first matrix size");
    scanf("%d", &n);
    int ar[n][n];
    printf("Enetr the first matrix ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int br[n][n];
    printf("Enetr the second matrix");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &br[i][j]);
        }
    }
    int cr[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cr[i][j] = ar[i][j] - br[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", cr[i][j]);
        }
        printf("\n");
    }
}
