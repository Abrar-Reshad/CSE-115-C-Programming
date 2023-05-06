#include<stdio.h>

float fact(int n)
{
    if (n==1)
        return 1;
    else
        return n*fact(n-1);
}

float sum(int n)
{
    if (n==1)
        return 1;
    else
        return n/fact(n)+sum(n-1);

}

int main()
{
    int n;
    printf("Enter n= ");
    scanf("%d",&n);

    printf("Sum=%.2f",sum(n));
    return 0;
}
