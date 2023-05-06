#include<stdio.h>
int main()
{
    int i,n;

    printf("enter size= ");
    scanf("%d",&n);

    int arr[n],k;

    for (i=0;i<n;i++)
    {
        printf("Enter arr[%d]=",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter index to delete= ");
    scanf("%d",&k);

    for (i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for (i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;

}
