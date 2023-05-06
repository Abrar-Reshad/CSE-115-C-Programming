#include<stdio.h>
int main()
{
    int m,n,i;

    printf("enter m & n= ");
    scanf("%d%d",&m,&n);

    for (i=n;i<=m;i++)
    {
        if (i%3==0)
        {
            continue;
        }
        if (i%2==0)
        {
            printf("%d ",i);
        }

    }

    return 0;

}
