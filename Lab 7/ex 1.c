#include<stdio.h>
int main()
{
    int n,r;
    int i;
    printf("enter ");
    scanf("%d",&n);

    r=n%10;
    while (n>=10)
    {
        n=n/10;
    }


    printf("first digit =%d\n",n);
    printf("last digit =%d\n",r);

    return 0;
}
