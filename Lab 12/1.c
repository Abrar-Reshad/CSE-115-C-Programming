#include<stdio.h>

int sum (int a,int b)
{
    return a+b;
}

void y (int a,int b)
{
    printf("y is = %d",a-b);
}


int main()
{
    int a,b,n;
    printf("enter a and b= ");
    scanf("%d%d",&a,&b);

    n=sum(a,b);
    printf("sum is = %d\n",n);

    y(a,b);
}
