#include<stdio.h>

void check(int a)
{
    int isprime=1,i;
    if (a==0 || a==1)
        isprime=0;

    for(i=2;i<a;i++)
    {
        isprime=1;
            if (a%i==0)
            {
                isprime=0;
                break;
            }
    }

        if (isprime==1)
            {
                printf("%d is a prime number",a);
            }
            else
                printf("not a prime");

}


int main()
{
    int a;
    printf("enter a number= ");
    scanf("%d",&a);

    check(a);
}

