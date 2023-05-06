#include<stdio.h>
int main()
{
    int month;
    printf("enter month ");
    scanf("%d",&month);
    if (month==1)
    {
        printf("%d it contains 31 days", month);
    }
    else if (month==2)
    {
        printf("%d it contains 28,29 days", month);
    }
    else if (month==3)
    {
        printf("%d it contains 31 days", month);
    }
    else if (month==4)
    {
        printf("%d it contains 30 days", month);
    }
    else if(month==5)
    {
        printf("%d it contains 31 days", month);
    }
    else if (month==6)
    {
        printf("%d it contains 30 days", month);
    }
    else if (month==7)
    {
        printf("%d it contains 31 days", month);
    }
    else if (month==8)
    {
        printf("%d it contains 31 days", month);
    }
    else if(month==9)
    {
        printf("%d it contains 30 days", month);
    }
    else if(month==10)
    {
        printf("%d it contains 31 days", month);
    }
    else if(month==11)
    {
        printf("%d it contains 30 days", month);
    }
    else if (month==12)
    {
        printf("%d it contains 31 days", month);
    }
    else
    {
        printf("invalid number");
    }
    return 0;
}
