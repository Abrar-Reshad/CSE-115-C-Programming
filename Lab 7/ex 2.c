#include<stdio.h>
int main()
{
    int s,b=0,p,m,tax,n,i,sum=0;
    char x;
    printf("enter n= ");
    scanf("%d",&n);

    for (i=1;i<n;i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==n)
    {
        printf("perfect");
    }
    else
    {
        printf("not perfect");
    }







}
