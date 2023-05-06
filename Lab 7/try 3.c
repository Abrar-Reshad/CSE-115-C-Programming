#include<stdio.h>
int main()
{
    int a,i;
    printf("enter number ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        if (a%i==0 && i % 2==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
