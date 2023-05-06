#include<stdio.h>
int main()
{
    int n;
    printf("Enter size= ");
    scanf("%d",&n);
    int arr[n],i;

    for (i=0;i<n;i++)
    {
        printf("Enter arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]%2==0)
            printf("Even %d",arr[i]);
        else
            printf("Odd %d",arr[i]);
    }
    return 0;
}
