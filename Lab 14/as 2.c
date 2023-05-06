#include<stdio.h>
int main()
{
    int i,d,s,n,k,count=0;
    printf("Enter array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter search key:");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
           {
            count++;
          if(count==1)
            k=i;
           }

    }

    for(i=k;i<n;i++)
    {
        a[i]=a[i+1];

    }
    for(i=0;i<n-1;i++)
    {
        printf("%d\n",a[i]);

    }
}
