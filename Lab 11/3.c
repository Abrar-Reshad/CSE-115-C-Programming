#include<stdio.h>
int main()
{
    int i=2,j,n,isprime,count=0;
    printf("enter n= ");
    scanf("%d",&n);

    while (count <n)
    {
        isprime=1;
        for (j=2;j<i;j++)
        {
            if (i%j==0)
            {
                isprime=0;
                break;
            }
        }
        if (isprime==1)
        {
            printf(" %d",i);
            count++;
        }
        i++;

    }


    return 0;
}
