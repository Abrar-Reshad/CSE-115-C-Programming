#include<stdio.h>

int  natural(int n)
{
    if (n==0)
        return ;

    printf("%d ",n);
    natural(n-1);
}

int main()
{
    int n;
    printf("Enter n= ");
    scanf("%d",&n);

    natural(n);

}
