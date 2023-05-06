#include<stdio.h>
#define PI 3.14
int main()
{

    float pi,A,r;
    printf("enter the value of radius: ");
    scanf("%f", &r);
    A=4*PI*(r*r);
    printf("Surface area=%.2f",A);
    return 0;
}
