#include<stdio.h>
int main()
{
    int n;
    printf("enter a number= ");
    scanf("%d",&n);

    if (n%5==0 && n%5==0)
    {
        printf("%d multiple of 5 and 11 both",n);
    }
    else if (n%5==0)
    {
        printf("%d multiple of only 5",n);
    }
    else if (n%11==0)
    {
        printf("%d multiple of only 11",n);
    }

    else
    {
        printf("neither of them ");
    }
    return 0;
}

