// radix sort program in c
#include <stdio.h>
#include <stdlib.h>
int max(int[], int);
void counting_Sort(int[], int, int);
void radix_Sort(int[], int);
void Display(int[], int);

int main()
{
    int num;
    printf("Input number of elements in array : ");
    scanf("%d", &num);
    int array[num];
    printf("\nInput %d values :\n", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    radix_Sort(array, num);
    Display(array, num);
    return 0;
}

void counting_Sort(int array[], int num, int ex)
{
    int output[num];
    int i, count[10] = {0};
    for (i = 0; i < num; i++)
        count[(array[i] / ex) % 10]++;
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (i = num - 1; i >= 0; i--)
    {
        output[count[(array[i] / ex) % 10] - 1] = array[i];
        count[(array[i] / ex) % 10]--;
    }
    for (i = 0; i < num; i++)
        array[i] = output[i];
}

int Max(int array[], int num)
{
    int mx = array[0];
    for (int i = 1; i < num; i++)
        if (array[i] > mx)
            mx = array[i];
    return mx;
}
void radix_Sort(int array[], int num)
{
    int m = Max(array, num);
    for (int ex = 1; m / ex > 0; ex *= 10)
        counting_Sort(array, num, ex);
}
void Display(int array[], int num)
{
    printf("\n***Array after radix Sort***\n");
    for (int i = 0; i < num; i++)
        printf("%d ", array[i]);
}