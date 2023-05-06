#include<stdio.h>
int main()
{
    int n,reverse,r,is_prime,i,j;

    printf("enter n= ");
    scanf("%d",&n);

    while (n>0)
    {
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    printf("reverse is = %d\n",reverse);

    for (i=2; i<reverse; i++)
    {
           is_prime=1;
            if(reverse % i == 0)
            {
                is_prime =0;
                break;
            }
    }

        if(is_prime==0){
            printf("its not a prime ",reverse);
        }
        else{
            printf("its a prime",reverse);
        }


return 0;
}

