#include<stdio.h>
float avg(float a[],float n)
{
    int i,sum=0;

    for (i=0;i<n;i++)
    {
        sum=sum+a[i];
    }

    return sum/n;
}

int main()
{
    int i,n;

    printf("enter size=");
    scanf("%d",&n);

    float a[n];

    for (i=0;i<n;i++)
    {
        printf("Enter a[%d]=",i);
        scanf("%f",&a[i]);
    }


    printf("average=%.2f",avg(a,n));



}
