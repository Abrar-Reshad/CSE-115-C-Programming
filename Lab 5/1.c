#include<stdio.h>
int main()
{
    char ch;
    printf("enter something= ");
    scanf("%c",&ch);
    if ((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
    {
        printf("%c is a letter",ch);
    }
    else if (ch>='0' && ch<='9')
    {
        printf("%c is a digit",ch);
    }
    else
    {
        printf("%c its a special charecter",ch);
    }
    return 0;
}
