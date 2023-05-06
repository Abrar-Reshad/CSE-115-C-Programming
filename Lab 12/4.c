#include<stdio.h>
void check (int m,int n)
{
    int i,sum=0;
    for (i=m;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum is =%d",sum);
}

void main()
{
    int m,n;

    printf("M &n enter= ");
    scanf("%d%d",&m,&n);

    check(m,n);

}
