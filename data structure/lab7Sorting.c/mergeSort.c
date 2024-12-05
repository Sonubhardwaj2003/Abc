#include <stdio.h>
#include <conio.h>
#define max 20
void mergesort(int a[max], int p, int q);
void merge(int a[max], int p, int q, int r);
int main()
{
    int i, q, r, a[max], n;
    clrscr();
    printf("Enter number of  elements : ");
    scanf("%d", &n);
    printf("\n Enter the value of elements:");
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    mergesort(a, 1, n);
    for (i = 1; i <= n; i++)
        printf("\n%d", a[i]);
    getch();
}
void mergesort(int a[max], int p, int r)
{
    int q;
    if (p < r)
    {
        q = (p + r) / 2;
        mergesort(a, p, q);
        mergesort(a, q + 1, r);
        merge(a, p, q, r);
    }
}
void merge(int a[max], int p, int q, int r)
{
    int L[max], R[max], i, j, k, n1, n2;
    n1 = q - p + 1;
    n2 = r - q;
    for (i = 1; i <= n1; i++)
        L[i] = a[p + i - 1];
    for (j = 1; j <= n2; j++)
        R[j] = a[q + j];
    L[n1 + 1] = 32767;
    R[n2 + 1] = 32767;
    i = 1;
    j = 1;
    for (k = p; k <= r; k++)
    {
        if (L[i] < R[j])
        {
            a[k] = L[i];
            i = i + 1;
        }
        else
        {
            a[k] = R[j];
            j = j + 1;
        }
    }
}