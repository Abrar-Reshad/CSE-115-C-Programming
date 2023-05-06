#include<stdio.h>

void check(int a)
{
    if (a>0)
        printf("%d positive",a);
    else if (a==0)
        printf("Zero");
    else
        printf("%d negative",a);
}

int main()
{
    int a;
    printf("enter number= ");
    scanf("%d",&a);

    check(a);
}

