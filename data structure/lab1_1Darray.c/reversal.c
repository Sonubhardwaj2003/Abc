#include <stdio.h>
int main()
{
    int n,i,end,t,a[100];
    
    printf("Enter the number of elements in array\n");
    scanf("%d", &n);
    end=n-1;
    
    printf("Enter the array elements\n");
    
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n/2;i++)
        {
            t=a[i];
            a[i]=a[end];
            a[end]=t;
            end--;
        }
    
    printf("Reverse array is:\n");
    
    for (i=0;i<n;i++){
        printf("%d\n", a[i]);
    }
    return 0;
}