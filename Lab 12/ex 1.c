#include<stdio.h>
#define PI 3.1416

float D (float r)
{
    return 2*r;
}
float C (float r)
{
    return 2*PI*r;
}
float A (float r)
{
    return PI*(r*r);
}

int main()
{
    float r;
    printf("enter = ");
    scanf("%f",&r);

    printf("Circumference= %f \n",C(r));
    printf("Diameter =%f \n",D(r));
    printf("Area=%f \n",A(r));
}
