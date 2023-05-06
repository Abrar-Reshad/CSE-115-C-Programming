#include<stdio.h>
int main()
{
    int i,n,j,p,space;

    printf("enter n= ");
    scanf("%d",&n);

    space=n-1;
    p=1;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=space;j++)
        {
            printf(" ");
        }
        for (j=0;j<p;j++)
        {
            printf("%c",65+j);
        }
        printf("\n");
        space--;
        p+=2;
    }
    return 0;
}
