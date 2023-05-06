#include<stdio.h>
#include<math.h>
int main()
{
    int i,r,n,sum=1;

    printf("Enter n & r= ");
    scanf("%d%d",&r,&n);

    for (i=1;i<=n;i++)
    {
        sum=sum+pow(r,i);
    }
    printf("sum=%d",sum);
}
