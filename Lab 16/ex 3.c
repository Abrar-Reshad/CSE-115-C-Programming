#include<stdio.h>
int main()
{
    int r,c;

    printf("enter r= ");
    scanf("%d",&r);
    printf("enter c= ");
    scanf("%d",&c);

    int A [r][c],i,j;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if (A[i][j]%2==0)
            {
                sum=sum+A[i][j];
            }
        }
    }
    printf("sum= %d",sum);
    return 0;
}
