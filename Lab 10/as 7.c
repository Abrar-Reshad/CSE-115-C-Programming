#include<stdio.h>
int main()
{
    int i,j,n,r,isprime;

    printf("enter n= ");
    scanf("%d",&n);
    r=n-1;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
             printf("*");
        }
        printf("\n");
    }

    for(i=1;i<=n;i++)
    {
        for (j=r;j>=1;j--)
        printf("*");
        r--;

    printf("\n");
    }
    return 0;
}
