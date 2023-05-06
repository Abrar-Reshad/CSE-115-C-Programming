#include <stdio.h>
int main()
{
    int n;
    printf("Enter the row & col");
    scanf("%d", &n);
    int array[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Array[%d][%d]", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    int j = 0,k;
    for (int i = 0; i < n; i++)
    {
        for (k=0;k<i;k++)
        {
            printf("  ");
        }

        for ( ; j <= i; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}


