#include<stdio.h>
int main()
{
    int n,r,b=1,c,d=1,i,a=1;

    printf("enter n= ");
    scanf("%d",&n);
    printf("enter r= ");
    scanf("%d",&r);

    for (i=1;i<=n;i++)
    {
        a=a*i;//n!
    }

    for (i=1;i<=r;i++)
    {
        b=b*i;//r!
    }

    c=n-r;
    for (i=1;i<=c;i++)
    {
        d=d*i;
    }
    printf("ncr=%d",a/(b*d));
    return 0;
}
