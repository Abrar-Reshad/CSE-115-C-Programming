#include<stdio.h>
int main()
{
    int n,i,s;

    printf("Enter size= ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("Enter a[%d]=",i);


    scanf("%d",&a[i]);
    }


    printf("Enter search key= ");
    scanf("%d",&s);

    printf("indexs are\n");

    for (i=0;i<n;i++)
    {
        if (a[i]==s)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
