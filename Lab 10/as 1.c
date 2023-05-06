#include<stdio.h>
int main()
{
    int i,j,a,space,r;
    printf("enter a = ");
    scanf("%d",&a);

    space=0;
    r=a;
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=space;j++)
            printf(" ");

        for (j=1;j<=r;j++)
        {
             if (i==1 || i==a || j==r || j== 1)
             {
                 printf("*");
             }
             else
             {
                 printf(" ");
             }
        }

        space++;
        r--;
        printf("\n");
    }
    return 0;
}
