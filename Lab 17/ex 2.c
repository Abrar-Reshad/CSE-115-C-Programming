#include<stdio.h>
struct dateofbirth
{
    int day,month,year;
    char name[100],fathersname[100],mothersname[100];
};

int main()
{
    int i;
    struct dateofbirth s[2];

    for (i=0;i<2;i++)
    {
        printf("Enter name= ");
        scanf("%s",&s[i].name);

        printf("enter date of birth(date/month/year)= ");
        scanf("%d%d%d",&s[i].day,&s[i].month,&s[i].year);

        printf("enter father name= ");
        scanf("%s",&s[i].fathersname);

        printf("enter mother name= ");
        scanf("%s",&s[i].mothersname);
    }
    printf("\n\n");
    printf("Older One information\n");



    if (s[0].year==s[1].year)
    {
        if (s[0].month<s[1].month)
        {
            printf("Name= ");
            puts(s[0].name);

            printf("\nFather name= ");
            puts(s[0].fathersname);

            printf("\nMothers name= ");
            puts(s[0].mothersname);
            return 0;
        }

        else if (s[0].month>s[1].month)
        {
            printf("Name= ");
            puts(s[1].name);

            printf("\nFather name= ");
            puts(s[1].fathersname);

            printf("\nMothers name= ");
            puts(s[1].mothersname);
            return 0;
        }
        else if (s[0].month==s[1].month)
        {
            if (s[0].day<s[1].day)
            {
                printf("Name= ");
                puts(s[1].name);

                printf("\nFather name= ");
                puts(s[1].fathersname);

                printf("\nMothers name= ");
                puts(s[1].mothersname);
                return 0;
            }
            else if (s[0].day>s[1].day)
            {
                printf("Name= ");
                puts(s[1].name);

                printf("\nFather name= ");
                puts(s[1].fathersname);

                printf("\nMothers name= ");
                puts(s[1].mothersname);
                return 0;
            }
        }
    }

    if (s[0].year<s[1].year)
    {
        printf("Name= ");
        puts(s[0].name);

        printf("\nFather name= ");
        puts(s[0].fathersname);

        printf("\nMothers name= ");
        puts(s[0].mothersname);

        return 0;
    }


    else if (s[0].year>s[i].year)
    {
        printf("Name= ");
        puts(s[1].name);

        printf("\nFather name= ");
        puts(s[1].fathersname);

        printf("\nMothers name= ");
        puts(s[1].mothersname);
        return 0;
    }



}
