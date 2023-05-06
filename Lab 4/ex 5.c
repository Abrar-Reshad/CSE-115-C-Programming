#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("enter the value of a,b and c= ");
    scanf("%d %d %d", &a,&b,&c);
    D=sqrt((b*b)-4*a*c);
    if (D>=0)
    {
        printf("real value");
    }
    else
    {
        printf("No real root exist");
    }
    return 0;
}
