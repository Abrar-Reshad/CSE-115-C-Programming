#include<stdio.h>
int main()
{
    int age;
    printf("enter your age= ");
    scanf("%d",&age);

    if (age<25)
    {
        printf("You are too young");
    }
    else if (age>45 )
    {
        printf("your too old");
    }
    else
    {
        printf("your eligible to work");
    }
    return 0;
}

