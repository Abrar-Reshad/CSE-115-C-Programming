#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];

    printf("Enter string= ");
    gets(a);

    int i,capital,small;
    char c[20],s[20];

    for(i=0;a[i]!=NULL;i++)
    {
        if (a[i]>='A'|| a[i]<='Z')
            {
                capital++;
                c[i]=a[i];
            }
        else if (a[i]>='a'|| a[i]<='z')
           {
                small++;
                s[i]=a[i];
           }

    }
    printf("Number of Capital=%d\n",capital);
    printf("Number of small=%d\n",small);

    printf("Capital letter=%s\n",c);
    printf("Small letter=%s\n",s);

    return 0;

}
