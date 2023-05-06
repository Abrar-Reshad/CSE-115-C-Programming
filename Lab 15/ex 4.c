#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];

    printf("enter sring= ");
    gets (s);

    int i,j,count=0;
    for (i=0;s[i]!=NULL;i++)
    {
        if (isupper(s[i]))
        {
            s[i]=tolower(s[i]);
        }
    }
    puts(s);

    char f[26];

    for (i=0;i<26;i++)
    {
        f[i]=0;
    }

    for (i=0;s[i]!=0;i++)
    {
        if (s[i]>='a' && s[i]<='z')
        {
            f[s[i]-97]++;
        }
    }

    for (i=0;i<26;i++)
    {
        if (f[i]!=0)
        {

            printf("%c/%c=%d ,",i+97,i+65,f[i]);

        }

    }
    return 0;

}
