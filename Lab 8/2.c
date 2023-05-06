#include<stdio.h>
int main()
{
    int i,LCM,mul,n1,n2,max;

    printf("enter n= ");
    scanf("%d",&n1);
    printf("enter n= ");
    scanf("%d",&n2);

    if (n1>n2)
    {
        max=n1;
    }
    else
    {
        max=n2;
    }

    for (i=1; ;i++)
    {
        mul=max*i;
        if (mul%n2==0 && mul%n1==0)
        {
            LCM=mul;
            break;
        }
    }
    printf("LCM =%d",LCM);

    return 0;
}



