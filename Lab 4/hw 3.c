#include<stdio.h>
int main()
{
    char ch;
    printf("enter a digit= ");
    scanf("%c", &ch);

    if (ch>='0' && ch<='9')
    {
        printf("%c is hexa number",ch);
    }
    else if (ch>='A' && ch<='F')
    {
        printf("%c is hexa numbere",ch);
    }
    else if (ch>='a' && ch<='f')
    {
        printf("%c is hexa number",ch);
    }
    else
    {
        printf("%c is not a hexa number",ch);
    }
    return 0;
}



