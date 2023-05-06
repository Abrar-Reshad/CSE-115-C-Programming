#include<stdio.h>
int main()
{
    int i,j,n;
    float term,sum=0;

    printf("enter n= ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        term=0;
        for (j=1;j<=i;j++)
        {
            term=0;
            term=term+(1.0/j);
            sum=sum+term;
        }
    }
     printf("sum is =%.2f",sum);
    return 0;
}
