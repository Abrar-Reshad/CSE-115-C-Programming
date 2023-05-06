#include<stdio.h>
int main()
{
    int n,i,s;

    printf("Enter size= ");
    scanf("%d",&n);

    int a[n],max;

    for(i=0;i<n;i++)
    {
        printf("Enter a[%d]=",i);
        scanf("%d",&a[i]);
    }
    int j,t;
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (a[i]<a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
        }
    }
    printf("2nd largest number is =%d\n",a[1]);

    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
           if (a[j]<a[i])
           {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
           }
        }
    }

        printf("2nd Lowest number is =%d",a[1]);


 return 0;
}


