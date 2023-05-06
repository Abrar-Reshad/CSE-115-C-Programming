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

    int space=n-1,j=n-1;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < space; k++)
        {
            printf("  ");
        }

        for ( ;j>=0;)
        {
            printf("%d ", array[i][j]);
            j--;
            break;
        }
        printf("\n");
        space--;
    }

    return 0;
}
