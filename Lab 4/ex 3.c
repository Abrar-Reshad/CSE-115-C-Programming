#include<stdio.h>
int main()
{
    int n;
    printf("enter a number= ");
    scanf("%d",&n);

    if (n%2==0 && n%5==0)
    {
        printf("invalid number");
    }
    else if (n%5==0)
    {
        printf("valid number");
    }
    else if (n%2==0)
    {
        printf("valid number");
    }
    else
    {
        printf("invalid number");
    }
    return 0;
}
