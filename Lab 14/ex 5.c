#include<stdio.h>
#include<string.h>
int main()
{
    char c[20];

    printf("Enter string= ");
    gets(c);

    int t,i,len;

    len=strlen(c);
    char p[len];
    len=len-1;

    for (i=0;i<=len;i++)
    {
        t=c[i];
        p[i]=c[len];
        p[len]=t;
        len--;

    }

      printf("revers is=%s\n",p);

      strcmp(p,c);

      if (p==c)
        printf("Its palindrome\n");
      else
        printf("Not palindrome");

    return 0;
}
