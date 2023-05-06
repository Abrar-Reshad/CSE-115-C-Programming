#include<stdio.h>
int main()
{
    int i,j,n,r,space,f;
    printf("enter n= ");
    scanf("%d",&n);
    r=1;
    space=n-1;

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=space;j++)
        {
            printf(" ");
        }
        for (j=1;j<=r;j++)
        {
            printf("*");
        }
     printf("\n");
     r=r+2;
     space--;
    }
    f=r-4;
    space=1;

    for (i=1;i<=n;i++)
    {
       for (j=1;j<=space;j++)
       {
           printf(" ");
       }
       for (j=1;j<=f;j++)
        {
           printf("*");
        }
        printf("\n");
        f=f-2;
        space++;

    }
    return 0;
}
