#include<stdio.h>
int main()
{
    int n,i,f=1;
    printf("enter n= ");
    scanf("%d" ,&n);

    for (i=;i<=n;i++)
    {
        f=f*i;
    }
    printf("fact is =%d",f);

    return 0;
}
