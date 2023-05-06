#include<stdio.h>
struct student
{
    char name[50];
    int id;
    float cgpa;
};

int main()
{
    struct student s[2];
    int i;

    for (i=0;i<2;i++)
    {
        printf("Enter Name = ");
        scanf("%s",&s[i].name);

        printf("Enter ID= ");
        scanf("%d",&s[i].id);

        printf("enter CGPA= ");
        scanf("%f",&s[i].cgpa);
    }

    if (s[0].cgpa>s[1].cgpa)
    {
        printf("Name = %s",s[0].name);
        printf("\nID=%d",s[0].id);
    }
    else
    {
        printf("Name = %s",s[1].name);
        printf("\nID=%d",s[1].id);
        printf("\nGot the highest CGPA");
    }
    return 0;
}
