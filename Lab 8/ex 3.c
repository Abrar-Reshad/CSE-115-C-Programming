#include<stdio.h>
int main()
{
    int n,i,f=1,g=1;

    printf("enter n= ");
    scanf("%d",&n);

    for (i=1; i<=n ;i++)
    {
        f=f*i;
        g=g*f;
    }
    printf("value is = %d",g);

    return 0;
}
