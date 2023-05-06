#include<stdio.h>
int digit (int n)
{
    int r;

    if (n==0)
        return ;

    r=n%10;

    return r+digit(n/10);
}

int main()
{
    int n;

    printf("Enter n= ");
    scanf("%d",&n);

    printf("Sum=%d",digit(n));

    return 0;
}
