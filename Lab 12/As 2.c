#include<stdio.h>
int power(int a,int b)
{
    int i,r=1;
    for (i=1;i<=b;i++)
    {
        r=r*a;
    }
    return r;
}

int main()
{
    int a,b;
    printf("enter = ");
    scanf("%d%d",&a,&b);

    printf("result= %d",power(a,b));
}
