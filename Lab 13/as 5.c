#include<stdio.h>
int main()
{
    int n,i,s;
    printf("enter  n=");
    scanf("%d",&n);

    int a[n];

    printf("enter  s=");
    scanf("%d",&s);

    for (i=0;i<n;i++)
    {
        printf("enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    for (i=s;i<n;i++)
    {
        a[s]=a[i+1];
        n--;
    }
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }







    return 0;

}
