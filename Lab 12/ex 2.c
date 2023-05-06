#include<stdio.h>
void summ (int n)
{
    int i,sum=0,r;
    for (i=1;i<=n;i++)
    {
        r=i*i;
        sum=sum+r;
    }
    printf("Sum=%d",sum);
}

void main()
{
    int n;

    printf("enter n= ");
    scanf("%d",&n);

    summ(n);
}
