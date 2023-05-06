#include<stdio.h>
int main()
{
    float s,b,p,m,tax;
    printf("enter your salary= ");
    scanf("%f",&s);

    if (s>=0 && s<=14999.99){
        p=15;
        tax=0+(15/100)*(s-0);
        printf("tax is =%.2f",tax);
    }

    return 0;

}
