#include<stdio.h>
void toh(int n,char s,char m,char d)
{
    if(n==1)
    {
        printf("Move disk from %c to %c \n",s,d);
    }
    else{
        toh(n-1,s,d,m);
        printf("Move disk from %c to %c \n",s,d);
        toh(n-1,m,s,d);
    }
}
int main()
{
    printf("Give a num");
    int a;
    char s='s';
    char d='d';
    char m='m';
    scanf("%d",&a);
    toh(a,s,m,d);
}