#include<stdio.h>
int main()
{
    int i,m,n,sum=0,r,p;

    printf("enter range m>n= ");
    scanf("%d%d",&n,&m);

    for (i=n;i<=m;i++)
    {
        n=i;
        p=0;
        while (n>0)
        {
            r=n%10;
            p=p*10+r;
            n=n/10;
        }
        if (i==p)
        {
            sum=sum+i;
        }
    }
    printf("sum is = %d",sum);

    return 0;
}
