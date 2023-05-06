#include<stdio.h>
void check(int a)
{
    int i,j,sum;

    for (i=a;i<=a;i++)
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
            printf("%d is a perfect number",a);
        }
        else printf("Not a perfect number");
    }
}

int main()
{
    int n;

    printf("enter n= ");
    scanf("%d",&n);

    check(n);
}
