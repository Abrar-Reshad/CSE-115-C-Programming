#include<stdio.h>
int main()
{
    int a,i,sum=0;
    printf("enter n= ");
    scanf("%d",&a);
    for (i=3;i<=a;i+=4)
    {
        sum=sum+i;
    }
    printf("Total=%d",sum);
    return 0;
}
