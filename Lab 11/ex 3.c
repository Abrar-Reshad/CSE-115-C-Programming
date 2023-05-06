#include<stdio.h>
int main()
{
    int j,n;
    printf("enter n= ");
    scanf("%d",&n);
    int count=0,sum=0,i=1;

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
              printf("%d ",i);
              count++;
            }
            i++;

    }
    return 0;
}
