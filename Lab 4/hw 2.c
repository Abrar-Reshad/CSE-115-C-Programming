#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b and c= ");
    scanf("%d %d %d", &a,&b,&c);

    if (a+b+c==180)
    {
        printf("right tiangle");
    }
    else
    {
        printf("Not a right triangle");
    }
    return 0;
}


