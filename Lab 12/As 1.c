#include<stdio.h>
float check(float n)
{
    float i,sum=0,j,fact=1;

    for (i=1;i<=n;i++)
    {
        sum=0;
        fact=1;
        for (j=1;j<=i;j++)
        {
            fact=fact*j;
            sum=sum+1/fact;
        }
    }
    return sum;
}

int main()
{
    float n;
    printf("enter n =");
    scanf("%f",&n);

    printf("Sum=%f",check(n));
}

