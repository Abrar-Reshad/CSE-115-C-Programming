#include<stdio.h>
int main()
{
    int A[3][5],i,j,n,c;

    for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("enter n= ");
    scanf("%d",&n);


    for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
           printf("%d  ",n*A[i][j]);
        }
        printf("\n");
    }


    return 0;
}
