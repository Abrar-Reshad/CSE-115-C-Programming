#include<stdio.h>
int main()
{
    int i,j,n,space;
    printf("enter n= ");
    scanf("%d",&n);
    space=n-1;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=space;j++)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            if (j%2==1)
           {
               printf("0");
           }
           else
           {
               printf("1");
           }
        }
        printf("\n");
        space--;
    }
}
