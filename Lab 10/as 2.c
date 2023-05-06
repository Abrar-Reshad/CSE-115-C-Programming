#include<stdio.h>
int main()
{
    int i,j,n,space;
    printf("Enter n= ");
    scanf("%d",&n);

    space=n-1;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=space;j++)
        {
            printf(" ");
        }
        for (j=0;j<i;j++)
        {
            printf(" %c",'A'+i-1);
        }
        space--;
        printf("\n");
    }
    return 0;
}
