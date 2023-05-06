#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a leter= ");
    scanf("%c",&ch);

    switch (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        case 1:printf("Vowel");
               break;
        case 0:printf("Consonent");
                break;
    }
    return 0;
}
