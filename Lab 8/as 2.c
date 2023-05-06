#include<stdio.h>
int main()
{
    int b,dec=0,p=1,r;
    printf("enter binary : ");
    scanf("%d",&b);

    while (b!=0)
    {
        r=b%10;
        dec=dec+(r*p);
        b=b/10;
        p=p*2;
    }
    printf("decimal is = %d",dec);
    return 0;
}
