#include<stdio.h>
int main()
{
    int i=0,n,r,p,a=0,b,k;

    printf("enter term= ");
    scanf("%d",&n);

    while (a!=n)
    {
            i++;
            b=i;
            p=0;
            while (b>0)
            {
                r=b%10;
                p=p*10+r;
                b=b/10;
            }

        if (i==p)
            {
                a++;
            }


    }
    printf("Nth number is = %d",i);

    return 0;
}
