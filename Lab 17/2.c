#include<stdio.h>
struct distance
{
    int feet;
    float inch;
};

int main()

{
    struct distance d1,d2,sum;
    printf("enter 1st distace= ");
    scanf("%d",&d1.feet);
    printf("enter 1st distace= ");
    scanf("%f",&d1.inch);
    printf("enter 2nd distace= ");
    scanf("%d",&d2.feet);
    printf("enter 2nd distace= ");
    scanf("%f",&d2.inch);

    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;

    if (sum.inch>12)
    {
        sum.feet++;
        sum.inch=sum.inch-12;
    }


    printf("sum is=%d feet %.1f inch",sum.feet,sum.inch);




}
