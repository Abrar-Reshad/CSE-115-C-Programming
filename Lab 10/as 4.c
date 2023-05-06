#include<stdio.h>
int main()
{
    int i,j,n,space,k,p;
    printf("enter n = ");
    scanf("%d",&n);
    k=1;
    space=n-1;
    p=1;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=space;j++)
            printf(" ");
        for (j=1;j<=p;j++,k++)
            {
               {
                  if (k>9)
                  k=0;
               }
            printf("%d",k);
            }
            printf("\n");
            space--;
            p=p+2;

    }
}
