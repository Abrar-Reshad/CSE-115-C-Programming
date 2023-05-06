#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter n1= ");
    scanf("%d",&n1);
    printf("enter n2= ");
    scanf("%d",&n2);
    if (n1<n2)
    {
        printf("%d  is minimum",n1);
    }
    else
    {
        printf(" %d is minimum",n2);
    }
    return 0;
}
