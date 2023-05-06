#include<stdio.h>
int c (float a)
{
    int i;
    i=a;

    if (a-i>=0.5)
        return i+1;
    else
        return i;
}

int main()
{
    float a;

    printf("Enter a= ");
    scanf("%f",&a);


    printf("result=%d",c(a));
}

