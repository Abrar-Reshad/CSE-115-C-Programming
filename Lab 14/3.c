#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter size = ");
    scanf("%d",&n);

    int a[n],b[n],c[n];

    for (i=0;i<n;i++)
    {
        printf("Enter 1st array[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        printf("Enter 2nd array[%d]= ",i);
        scanf("%d",&b[i]);
    }

    for (i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];

        printf("%d+%d=%d\n",a[i],b[i],c[i]);
    }
    return 0;
}
