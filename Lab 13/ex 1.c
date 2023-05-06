#include<stdio.h>
int sum (int n)
{

    if (n==1)
        return 1;
    else
        return (n*n)+sum(n-1);


}

int main()
{
    int n;

    printf("enter n= ");
    scanf("%d",&n);

    printf("Sum=%d",sum(n));
}
