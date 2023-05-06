#include <stdio.h>
int main()
{
    int i, n, isPrime = 1;
    printf("Enter any number to check if it is prime: ");
    scanf("%d", &n);
    for(i=2; i<n; i++)
    {

        if(n%i==0)

        {
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 0)
    {
        printf("\n%d is not a prime number", n);
    }
    else
    {
        printf("\n%d is a prime number", n);
    }
}
