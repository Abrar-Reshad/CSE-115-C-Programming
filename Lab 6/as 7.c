#include<stdio.h>
int main()
{
    int b,p,i,r=1;
    printf("enter base= ");
    scanf("%d",&b);
    printf("enter power= ");
    scanf("%d",&p);

    for (i=1;i<=p;i++)
    {
      r=r*b;

    }
    printf("result is= %d",r);

    return 0;

}


