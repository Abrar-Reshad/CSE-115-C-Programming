#include<stdio.h>
int main()
{
    int n,i,j;

    printf("enter n= ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        if (i==1 || i==n)
        {
            for (j=1;j<=i;j++)
            {
            printf("*");
            }
        }
        else
        {
            printf("*");
            for (j=1;j<=i-2;j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
        }



    return 0;
}
