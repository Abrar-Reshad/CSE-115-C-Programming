#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],t[100];

    printf("Enter string= ");
    gets(s);
    int i,j,k;

    for (i=0;s[i]!=0;i++)
    {
       for (j=i+1;s[j]!=NULL;j++)
       {
           if (s[i]==s[j])
           {
               for (k=j;s[k]!=NULL;k++)
               {
                   s[k]=s[k+1];
               }
           }
       }
    }
    printf("%s",s);


}
