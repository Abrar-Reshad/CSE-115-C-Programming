#include<stdio.h>
int main()
{
    int n,i,sum=0,s;

    printf("Enter size= ");
    scanf("%d",&n);

    float a[n],avg;

    for(i=0;i<n;i++)
    {
        printf("Enter a[%d]=",i);
        scanf("%f",&a[i]);
    }

    for (i=0;i<n;i++)
    {
        sum=sum+a[i];
    }

    avg=sum/n;

    printf("Average is =%.2f\n",avg);

    for (i=0;i<n;i++)
    {
        if (a[i]>avg)
        {
            printf("%.0f ",a[i]);
        }
    }
    return 0;
}
