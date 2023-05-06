#include<stdio.h>
int power (int a,int b)
{
    if (b==0)
        return 1;
    else
        return a*power(a,b-1);
}

int main()
{
    int a,b;

    printf("enter base= ");
    scanf("%d",&a);
    printf("enter b= ");
    scanf("%d",&b);

    printf("value=%d",power(a,b));
}

