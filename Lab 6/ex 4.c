#include<stdio.h>
#include<math.h>
int main()
{
    int i=2,n,sum=0;
    printf("enter n= ");
    scanf("%d",&n);

    while (i<=n)
    {
        sum=sum+pow(i,3);
        i=i+3;

    }
    printf("total is %d",sum);

    return 0;
}
