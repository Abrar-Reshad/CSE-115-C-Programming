#include<stdio.h>
int main()
{
    int a,i=0;
    printf("enter n= ");
    scanf("%d",&a);

    while (a>0)
    {
        if (a%10!=0)
            i++;
            a=a/10;
                        }
    printf("digit is %d",i);
}
