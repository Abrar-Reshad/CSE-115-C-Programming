#include<stdio.h>
int main()
{
    int j,n;
    printf("enter n= ");
    scanf("%d",&n);
    int count=0,sum=0,i=1,sum1=0;

    while (count<n)
    {
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
                sum1=sum1+i;
              count++;
            }
            i++;

    }
    printf("sum=%d",sum1);
    return 0;
}

