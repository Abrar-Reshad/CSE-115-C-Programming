#include<stdio.h>
int main()
{
    int a,b,i,c,sum=0;
    printf("enter value maximum= ");
    scanf("%d",&a);
    printf("Enter value minimum= ");
    scanf("%d",&b);
    printf("enter common ratio =");
    scanf("%d",&c);


    for (i=b;i<=a;i*=c)
    {
        sum=sum+i;
    }
    printf("total %d",sum);
    return 0;

}

