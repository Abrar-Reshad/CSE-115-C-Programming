#include<stdio.h>
int main ()
{
    int X,Y,x1,y1,x2,y2;
    printf("x1= ");
    scanf("%d", &x1);
    printf("y1= ");
    scanf("%d", &y1);
    printf("x2= ");
    scanf("%d", &x2);
    printf("y2= ");
    scanf("%d", &y2);
    X=(x1+y1)/2;
    Y=(x2+y2)/2;
    printf("Midpoint is=%d,%d",X,Y);
    return 0;



}
