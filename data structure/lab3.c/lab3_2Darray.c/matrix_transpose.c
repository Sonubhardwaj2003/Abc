#include<stdio.h>
void main(){
    int m,n,i,j;
    printf("Enter the matrix size:\n");
    scanf("%d%d",&m,&n);
    int ar[m][n],at[m][n];
    printf("Enter the elements of  matrix:\n");
    for( i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&ar[i][j]);
        at[j][i]=ar[i][j] ;
        }
    }
    printf("transpose matrix is:\n");
    for( i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        printf("%d ",at[i][j]);
        }
        printf("\n");
    }
}
