#include<stdio.h>
int main()
{
    int i=0,j,n,sum=0,a=0,term;

    printf("enter term= ");
    scanf("%d",&n);

    while (a!=n)
    {
        i++;
        sum=0;
        for (j=1;j<i;j++)
        {
            if (i%j==0)
            {
                sum=sum+j;
            }
        }
        if (sum==i)
            {
                a++;
                term=i;
            }
    }
    printf("nth number is = %d",term);

    return 0;
}
