#include<stdio.h>
int main()
{
   float s,r,angle;
    printf("enter arc= ");
    scanf("%d",&s);
    printf("radius = ");
    scanf("%d", &r);
    angle=(s/r);
    printf("Angle is =%.2f radion",angle);
    return 0;
}
