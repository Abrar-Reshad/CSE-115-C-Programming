#include<stdio.h>
int main()
{
    char s[100];

    printf("Enter a string= ");
    scanf("%[^\n]",s);

    int i,space=0;

    for (i=1;i<s[i]!='\0';i++)
    {
        if (s[i]==' ')
            space++;
    }
    printf("Number of spaces= %d",space);
    return 0;
}
