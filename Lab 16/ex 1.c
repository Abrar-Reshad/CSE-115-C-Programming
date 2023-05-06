#include<stdio.h>
int main()
{
    int n;
    printf("enter n= ");
    scanf("%d",&n);

    int A[n][n],i,j;

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    int k;
    j=0;
    for (i=0;i<n;i++)
    {
        for (k=0;k<i;k++)
        {
            printf("  ");
        }
        for ( ;j<=i;j++)
        {
            printf("%d  ",A[i][j]);
        }
        printf("\n");

    }

    return 0;

}

