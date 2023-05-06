#include<stdio.h>
int main()
{
    int n,f=1,r,i,c,d=1;

    printf("enter n= ");
    scanf("%d",&n);
    printf("enter r= ");
    scanf("%d",&r);

    for (i=1;i<=n;i++)
    {
        f=f*i;
    }
    c=n-r;
    for (i=1;i<=c;i++)
    {
        d=d*i;
    }

    printf("npr is %d",f/d);

    return 0;
}
