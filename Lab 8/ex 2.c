#include<stdio.h>
int main()
{
    int n,num,i,f=1,g=1;

    printf("enter n= ");
    scanf("%d",&num);
    n=num*2;
    for (i=1; i<=n ;i++)
    {
        f=f*i;
    }
    for (i=1; i<=num;i++)
    {
        g=g*i;
    }

    printf("value is =%d",f/g);

    return 0;
}
