//c program to perform selection sort
#include <stdio.h>
int main()
{
int i, j, num, min, temp;
printf("Input number of elements in array : ");
scanf("%d", &num);
    
int array[num];
printf("Input %d values ",num);
for(i = 0; i < num; i++)
{
scanf("%d", &array[i]);
}
    
for(i=0; i<num; i++)
{
for(j=i+1; j<num; j++)
{
if(array[i] > array[j])
{
temp=array[i];
array[i]=array[j];
array[j]=temp;
}
}
}
printf("\n\nSorted array: ");
for(i = 0; i < num; i++)
{
printf("%d  ", array[i]);
}
return 0;
}