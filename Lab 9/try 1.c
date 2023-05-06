#include<stdio.h>
int main()
{
    int m,n,i,j;

    printf("enter m & n= ");
    scanf("%d%d",&m,&n);


    for (i=1;i<=n;i++)
    {
        if (n>m)
        {
            printf("invalide (m>n)");
            break;
        }
        for (j=1;j<=m;j++)
        {
            printf("*");
        }
            printf("\n");
    }


    return 0;

}

