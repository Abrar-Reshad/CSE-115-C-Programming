#include<stdio.h>
#include<math.h>
int s(int r,int n)
{
    if (n==0)
        return 1;
    else
        return pow(r,n)+s(r,n-1);
}

int main()
{
    int n,r;
    printf("Enter r & n= ");
    scanf("%d%d",&r,&n);

    printf("sum=%d",s(r,n));

    return 0;
}
