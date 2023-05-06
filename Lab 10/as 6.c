#include<stdio.h>
int main()
{
    int i,j,n,space,r;
    printf("enter n= ");
    scanf("%d",&n);
    r=n;
    space=0;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(j=1;j<=r;j++)
        {
            printf(" *");
        }
        printf("\n");
        r--;
        space++;
    }
    return 0;
}
