#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("enter the value of a,b and c= ");
    scanf("%d %d %d", &a,&b,&c);

    if (a+b>c && b+c>a && c+a>b)
    {
        printf("right tiangle");
    }
    else
    {
        printf("Not a right triangle");
    }
    return 0;
}

