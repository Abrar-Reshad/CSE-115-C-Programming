#include<stdio.h>
#include<math.h>
int main()
{
    float b,h,o;
    printf("enter base= ");
    scanf("%f",&b);
    printf("enter height= ");
    scanf("%f",&h);
    o=sqrt(b*b+h*h);
    printf("otivuj=%f",o);
    return 0;
}
