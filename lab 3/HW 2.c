#include<stdio.h>
#define PI 3.14
#include<math.h>
int main()
{
    float r,h,b,A,V;
    printf("enter radius= ");
    scanf("%f",&r);
    printf("enter height= ");
    scanf("%f",&h);
    b=sqrt(h*h+r*r);
    A=PI*r*(r+b);
    V=PI*(r*r)*h/3;
    printf("Area is =%.2f\n",A);
    printf("Volume is =%.2f",V);
    return 0;

}
