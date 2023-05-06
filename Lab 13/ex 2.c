#include<stdio.h>

float p (float n)
{
    if (n==1)
        return 1;
    else
        return 1/n*p(n-1);
}

int main()
{
    float n;

    printf("enter n= ");
    scanf("%f",&n);

    printf("Sum=%.5f",p(n));
}

