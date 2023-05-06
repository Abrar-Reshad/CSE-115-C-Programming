#include<stdio.h>
void power (int r,int n)
{
    int i,sum=0,p,j;

    for (i=0;i<=n;i++)
    {

        p=1;
        if (i==0)
        {
            sum=1;
            continue;
        }
        for (j=1;j<=i;j++)
        {
            p=p*r;
        }
         sum=sum+p;
    }
    printf("sum=%d",sum);
}

void main()
{
    int r,n;

    printf("r & n= ");
    scanf("%d%d",&r,&n);

    power(r,n);
}
