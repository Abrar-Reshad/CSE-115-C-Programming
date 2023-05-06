#include<stdio.h>
int main()
{
    int n,r,sum=0,is_prime=1,i;

    printf("enter n= ");
    scanf("%d",&n);

    while (n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum =%d \n", sum);

    for (i=2;i<sum;i++)
    {
        is_prime=1;
        if (sum%i==0)
        {
            is_prime=0;
            break;
        }

    }
    if (is_prime==0)
    {
        printf("not a prime");
    }
    else {
        printf("its a prime number");
    }

    return 0;
}
