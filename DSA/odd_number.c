// #include<stdio.h>
// int main()
// {
//     int i,n;
//     printf("enter the value of n:\n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         if(i%2!=0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2){
        
            printf("%d\n",i);
        
    }
    return 0;
}