#include<stdio.h>
int main()
{
    int n;
    printf("enter n= ");
    scanf("%d",&n);

    int A[n][n],i,j,k;

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (i!=n-1)
            {
                for (k=0;k<=n-2;k++)
                {
                    printf("  ");
                    j++;
                }
            }
            printf("%d ",A[i][j]);

        }
        printf("\n");

    }

    return 0;

}

