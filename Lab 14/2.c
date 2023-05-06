#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter size= ");
    scanf("%d",&n);

    float arr[n],max;

    for (i=0;i<n;i++)
    {
        printf("Enter arr[%d]",i);
        scanf("%f",&arr[i]);
    }
    max=arr[0];

    for (i=0;i<n;i++)
    {
        if (max < arr[i])
            max=arr[i];
    }

    printf("Max=%.2f",max);

    return 0;
}
