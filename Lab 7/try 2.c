#include<stdio.h>
int main()
{
  int a ,i=0,sum=0,r;
   printf("enter n:");
   scanf("%d",&a);

   while (a>0)
   {
       r=a%10;
       sum=sum+r;
       a=a/10;

   }

printf("sum =%d\n",sum);

return 0;



}
