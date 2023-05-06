#include<stdio.h>
#include<string.h>
int f(char a[],char s)
{
     int i,j,found=0;

    for (i=0;a[i]!=0;i++)
    {
        if (a[i]==s)
            {
                found=1;
                break;
            }
    }
    if (found==1)
    printf("Found");
    else
        printf("Not Found");

}


int main()
{
    char a[50],s;


    printf("Enter string = ");
    gets(a);

    printf("enter search key= ");
    scanf("%c",&s);

    f(a,s);


     return 0;
}


