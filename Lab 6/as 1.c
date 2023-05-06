#include<stdio.h>
#include<math.h>
int main()
{
    int i=5,n,sum=0,j=2;
    printf("enter n= ");
    scanf("%d",&n); 5+9+15+23



    while (i<=14)
    {
        sum=sum+pow(i,2);
        j=j+2;
        i=i+j;
    }

    printf("total is %d",sum);

    return 0;
}

