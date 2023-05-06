#include<stdio.h>
int main()
{
    int n,i=0;
    printf("enter number= ");
    scanf("%d",&n);

    if (n==0)
    {
        printf("1 digit");
    }
    else
    {
        while (n>0)
        {
            n=n/10;
            i++;
        }
        printf("%d digit",i);
    }

    return 0;
}
