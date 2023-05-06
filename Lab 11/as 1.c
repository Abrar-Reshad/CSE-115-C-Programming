#include<stdio.h>
int main()
{
    int i,m,n,r,p=0;

    printf("Enter m and n= ");
    scanf("%d%d",&m,&n);

    for (i=n;i<=m;i++)
    {
        n=i;
        p=0;
        while (n>0)
        {
          r=i%10;
          p=p*10+r;
          n=n/10;
        }
        if (i==p)
            printf("%d ",i);
    }

    return 0;
}
