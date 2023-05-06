#include<stdio.h>
int main()
{
    int a;
    printf("enter semester= ");
    scanf("%d",&a);
    if (a==0){
        printf("invalid semester");
    }
    else if (a>=1 && a<=3){
        printf("Freshman");
    }
    else if (a>=4 && a<=6){
        printf("Sophomore");
    }
    else if (a>=7 && a<=9){
        printf("Jnior");
    }
    else if (a>=10 && a<=12){
        printf("Senior");
    }
    else {
        printf("You must graduate soon");
    }

    return 0;
}
