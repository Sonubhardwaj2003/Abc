#include<stdio.h>
void main(){
    int tem,m,n,i,j;
    printf("Enter the matrix size:\n");
    scanf("%d%d",&m,&n);
    int ar[m][n];
    printf("Enter the elements of  matrix:\n");
    for( i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&ar[i][j]);
        }
    }

    for( i=0;i<m;i++)
    {
        for(j=i+1;j<n;j++)
        {
         tem=ar[i][j];
         ar[i][j]=ar[j][i];
         ar[j][i]=tem;
        }
    }
    
    printf("transpose matrix is:\n");
    for( i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
}
