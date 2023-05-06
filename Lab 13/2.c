#include<stdio.h>

int check(int a)
{
    if (a==1)
        return 1;
    else
        return a*check(a-1);
}

int main()
{
    int a;

    printf("ernet =");
    scanf("%d",&a);

    printf("fact= %d",check(a));
}
