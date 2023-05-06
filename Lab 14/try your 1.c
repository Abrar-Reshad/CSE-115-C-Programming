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

    int count=0;

    for (i=0;i<n;i++)
    {
        if (arr[i]%2==0)
            count++;
    }
    printf("Even is = %d\n",count);
    int countt=0;
     for (i=0;i<n;i++)
    {
        if (arr[i]%2!=0)
            countt++;
    }
    printf("Odd =%d",countt);
return 0;

}
