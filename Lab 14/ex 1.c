#include<stdio.h>
int main()
{
    int n,j;
    printf("Enter Size= ");
    scanf("%d",&n);

    int a[n],i,s;

    for (i=0;i<n;i++)
    {
        printf("Enter a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("Enter search key= ");
    scanf("%d",&s);



    for (i=0;a[i]!=NULL;i++)
    {
        if (a[i]==s)
           {
             printf("First Index= %d\n",i);
             break;
           }
    }
    int count=0;

    for (i=0;a[i]!=NULL;i++)
    {
        if (a[i]==s)
           {
             j=i;
           }
    }

    printf("Last index=%d",j);

    return 0;

}
