#include<stdio.h>
int main()
{
    int k,p,i=0,suma=0,sump=0;
    float avg,a;


    while (1)
    {
        printf("enter amount(kg)= ");
        scanf("%d",&k);
        if (k<0)
        {
            printf("Invalid input, enter a positive number\n");
            continue;
        }
        if (k==0)
        {
            break;
        }

        suma=suma+k;
        printf("enter price= ");
        scanf("%d",&p);
        if (p<0)
        {
            printf("Invalid input, enter a positive number\n");
            continue;
        }
        sump=sump+p;
        a=p/k;
        avg=avg+a;
        i++;
    }
    printf("Total amount= %d\n\n",suma);
    printf("Total price= %d\n\n",sump);
    printf("Average= %f",avg/i);

    return 0;
}

