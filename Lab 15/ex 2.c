#include<stdio.h>
#include<string.h>

int main()
{
    char s[50],b[50];

    printf("Enter string= ");
    gets (s);

    int j=0,i;

    for (i=0;s[i]!=NULL;i++)
    {
        if (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            continue;
        }
        else if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            continue;
        }
        else
        {
            b[j]=s[i];
            j++;
        }
    }
    b[j]=NULL;

    printf("New String=%s",b);

    return 0;

}
