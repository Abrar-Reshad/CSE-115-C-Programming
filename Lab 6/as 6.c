#include<stdio.h>
int main()
{
    int n,i,fact=1,j=1,r;
    printf("enter n= ");
    scanf("%d",&n);
    printf("enter r= ");
    scanf("%d",&r);

    for (i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    for (i=1;i<=n-r;i++)
    {
       j=j*i;
    }
    printf("npr is =%d",fact/j);


    return 0;

}


