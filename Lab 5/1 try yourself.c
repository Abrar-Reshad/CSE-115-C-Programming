#include<stdio.h>
int main()
{
    char ch;
    printf("enter alphabet= ");
    scanf("%c",&ch);

    if (ch=='A'|| ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("vowel");
    }
    else if (ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
        printf("vowel");
        }
    else
    {
        printf("consonent");
    }

    return 0;
}
