#include<stdio.h>
int main()
{

    float sum=0,n,i,f=1;

    printf("enter n= ");
    scanf("%f",&n);

    for (i=1; i<=n; i++)
    {
        f=f*i;
        sum=sum+(1/f);
    }
    printf("sum= %.2f",sum);
    return 0;
}
