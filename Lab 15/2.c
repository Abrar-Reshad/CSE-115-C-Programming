#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch[100];

    printf("enter string= ");
    gets(ch);

    int i;

    for (i = 0; ch[i] != NULL; i++)
    {
        if (isupper(ch[i]))
        ch[i] = tolower(ch[i]);
        else if (islower(ch[i]))
        ch[i] = toupper(ch[i]);
    }
    puts(ch);

    return 0;
}


