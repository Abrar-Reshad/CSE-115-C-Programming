#include<stdio.h>
int main ()
{
    int n,reverse=0,r,i;

    printf("enter a number= ");
    scanf("%d",&n);
    i=n;

    while (n>0)
    {
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    if (reverse==i)
    {
        printf("its palindrome");
    }
    else{
        printf("not palindrome");
    }

    return 0;
}
