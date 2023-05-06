#include<stdio.h>
int main()
{
    int n1,n2,n3,i,mul,LCM,max;

    printf("enter n1 n2 n3= ");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1>n2 && n1>n3){
        max=n1;
    }
    else if(n2>n3 && n2>n1){
        max=n2;
    }
    else{
        max=n3;
    }

    for (i=1; ;i++){

         mul=max*i;
         if(mul%n1==0 && mul%n2==0 && mul%n3==0){
            LCM=mul;
            break;

         }
    }
    printf("LCM is = %d",LCM);


    return 0;
}
