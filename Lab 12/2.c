#include<stdio.h>

void p (int a)
{
    if (a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int main()
{

    int a,b;

    printf("Enter number= ");
    scanf("%d",&a);

    p(a);
}
