#include<stdio.h>

int check (int n)
{
    int r,sum=0;
   while (n!=0)
   {
       r=n%10;
       sum=sum*10+r;
       n=n/10;
   }
   return sum ;
}

int main()
{
    int n;
    printf("enter n= ");
    scanf("%d",&n);

    printf("Reverse of that number=%d ",check(n));

}
