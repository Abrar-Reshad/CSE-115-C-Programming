#include<stdio.h>
int main()
{
   int a,i=3,sum=0;

   printf("enter n= ");
   scanf("%d" ,&a);

   while(i<=a)
   {
       sum=sum+i;
       i=i+4;
   }
    printf("total is = %d",sum);

    return 0;

}
