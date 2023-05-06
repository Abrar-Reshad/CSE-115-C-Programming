#include<stdio.h>
int main()
{
    char c;
    printf("Enter a lowercase letter: ");
    scanf("%c",&c);
    c=c-32;
    printf("uppercase letter is:%c\n",c);
    c=++c;
    printf("next letter of that uppercase is=%c",c);
    return 0;
}
