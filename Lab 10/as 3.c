#include<stdio.h>
int main()
{
    int i,j,n,k;

    printf("Enter n = ");
    scanf("%d",&n);
    k=1;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++,k++)
        {
            if (k>9)
               {
                k=0;
               }
               printf(" %d",k);
        }

            printf("\n");
    }
    return 0;

}
