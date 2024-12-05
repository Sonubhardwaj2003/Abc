#include <stdio.h>
void main()
{
    int n, m, p, q, i, j, k;
    printf("Enetr the first matrix size:\n");
    scanf("%d%d", &m, &n);
    printf("Enetr the second matrix size:\n");
    scanf("%d%d", &p, &q);

    if (n == p)
    {
        int ar[m][n];
        printf("Enetr the first matrix:\n ");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &ar[i][j]);
            }
        }

        int br[p][q];
        printf("Enetr the second matrix:\n ");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &br[i][j]);
            }
        }

        int cr[m][q];
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                cr[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    cr[i][j] = cr[i][j] + ar[i][k] * br[k][k];
                }
            }
        }
        printf("Resultant array is :\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
              printf("%d ",cr[i][j]);
            }
            printf(" \n");
        }
    }
    else
    printf("multiplication not possible");
}
