#include<stdio.h>
int main ()
{
    int n1,n2,n3;
    printf("enter n1,n2 and n3= ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 < n2 && n1 < n3)
    {
        printf("%d is minimum", n1);
    }
    else if (n2 < n3)
    {
        printf("%d is minimum", n2);
    }
    else
    {
        printf("%d is minimum", n3);
    }
    return 0;
}
