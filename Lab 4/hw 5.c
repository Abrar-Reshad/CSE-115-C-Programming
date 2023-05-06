#include<stdio.h>
#define PI 3.14
int main()
{
    int r,a,a1,a2;
    printf("enter the value of a, r= ");
    scanf("%d %d", &a,&r);
    a1=PI*(r*r);
    a2=a*a;
    printf("area of circle is =%f\n",a1);
    printf("area of square is =%f\n",a2);
    if (a1>a2)
    {
        printf("can be inscribe");
    }
    else
    {
        printf("cant be inscribe");
    }
    return 0;
}



