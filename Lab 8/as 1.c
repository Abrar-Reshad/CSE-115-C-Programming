#include<stdio.h>
int main()
{
    int n,r,g;

    printf("enter n= ");
    scanf("%d",&n);

    while (n>0)
    {
        r=n%10;
        n=n/10;
    }


    while (r>0)
    {
        switch (r%10)
        {
    case 0:
        printf("Zero");
        break;
    case 1:
        printf("One ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three ");
        break;
    case 4:
        printf("Four ");
        break;
    case 5:
        printf("Five ");
        break;
    case 6:
        printf("Six ");
        break;
    case 7:
        printf("Seven ");
        break;
    case 8:
        printf("Eight ");
        break;
    case 9:
        printf("Nine ");
        break;
        }
        r=r/10;
    }


    return 0;
}
