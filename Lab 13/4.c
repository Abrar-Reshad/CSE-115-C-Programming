#include<stdio.h>
void check(int a,int b)
{
    if (a>b)
        return;

         printf("%d ",a);

    check(a+1,b);
}
void main()
{
    int a=1,b;

    printf("enter range= ");
    scanf("%d",&b);

    check(a,b);
}
