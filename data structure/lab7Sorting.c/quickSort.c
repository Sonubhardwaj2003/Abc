// quick sort program in c
#include <stdio.h>
#include <conio.h>
#define max 100
int a[max], n, i, l, h;

int main()
{
    void quick_sort(int a[], int i, int h);
    void printarray(int a[], int n);
    printf("Enter Number of elements :");
    scanf("%d", &n);
    printf("\n");
    printf("Enter value of elements :\n");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &a[i]);
    }
    fflush(stdin);
    i = 0;
    h = n - 1;
    quick_sort(a, i, h);
    printf("\n  Sorted array:\n");
    printarray(a, n);
    fflush(stdout);
    getch();
}

void quick_sort(int a[], int i, int h)
{
    int temp, key, low, high;
    low = i;
    high = h;
    key = a[(low + high) / 2];
    do
    {
        while (key > a[low])
        {
            low++;
        }
        while (key < a[high])
        {
            high--;
        }
        if (low <= high)
        {
            temp = a[low];
            a[low++] = a[high];
            a[high--] = temp;
        }
    } while (low <= high);
    if (l < high)
        quick_sort(a, l, high);
    if (low < h)
        quick_sort(a, low, h);
}

void printarray(int a[], int n)
{
    for (i = 0; i <= n - 1; i++)
    {
        printf(" %d\n", a[i]);
    }
}