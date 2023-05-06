#include<stdio.h>
int main()
{
    int i,sum=0;

    for (i=10000;i>=80;i=i/5)
    {
        sum=sum+i;
    }
    printf("sum is=%d",sum);
    return 0;
}
