#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int count=0,i;

    printf("Enter word= ");
    gets (s);

    for (i=0;s[i]!=NULL;i++)
    {
        if (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            count++;
        }

        else if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            count++;
        }

    }
    printf("Number of vowel= %d",count);

    return 0;
}
