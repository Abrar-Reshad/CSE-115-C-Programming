#include<stdio.h>
int main()
{
    int n;
    printf("enter year= ");
    scanf("%d",&n);

    if ((n%4==0 && n%100 !=0)||n%400==0)
    {
        printf("%d is a leapyear",n);
    }
    else
    {
        printf("%d Not a leapyear",n);
    }
    return 0;
}
