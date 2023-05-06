#include<stdio.h>
int main()
{
    int i,j,n,m,isprime;
    printf("enter m =");
    scanf("%d",&m);
    printf("enter n =");
    scanf("%d",&n);

    for (i=n;i<m;i++)
    {
        isprime=1;
        if (i==1)
        {
            isprime=0;
            continue;
        }

        for (j=2;j<i;j++)
        {
            if (i%j==0)
                {
                    isprime=0;
                    break;
                }
        }
        if (isprime==1)
            printf("%d ",i);

    }


    return 0;
}
