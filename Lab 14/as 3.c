#include<stdio.h>
int main()
{
    int n,i,s;

    printf("Enter size= ");
    scanf("%d",&n);

    int a[n],min,max;

    for(i=0;i<n;i++)
    {
        printf("Enter a[%d]=",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    int j,max2;
    for (i=0;i<n;i++)
    {
        if (max<a[i])
        {
            max=a[i];
            j=i;
        }
    }
    max2=a[0];

    for (i=0;i<n;i++)
    {
        if (i==j)
        {
            i++;
            i--;
        }
        else if (max<a[i])
        {
            max2=a[i];
        }
    }
    printf("%d",max2);

}

