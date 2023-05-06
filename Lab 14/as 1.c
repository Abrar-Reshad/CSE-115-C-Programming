#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter n= ");
    scanf("%d",&n);

    int a[n];

    for (i=0;i<n;i++)
    {
        printf("enter a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    int s,j;
    printf("enter enter searchkey= ");
    scanf("%d",&s);


    for (i=0;i<n;i++)
    {
        if (a[i]==s)
        {
           j=i;
           break;
        }
    }

    for (i=j;i<n-1;i++)
    {
        a[i]=a[i+1];

    }
    n--;

    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;

}
