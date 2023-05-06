#include<stdio.h>

struct student{

    char name[100];
    int roll;
    float marks;

};

int main()
{
    struct student s[10];
    int i;

    printf("student information\n");
    for (i=0;i<2;i++)
    {
        printf("Roll = %d\n",i+1);

        printf("Enter student name= ");
        scanf("%s",&s[i].name);

        printf("Enter marks= ");
        scanf("%f",&s[i].marks);
    }
    printf("\n\n\n");
    for (i=0;i<2;i++)
    {
        printf("Information of roll no=%d\n",i+1);
        printf("Name=");
        puts(s[i].name);

        printf("Marks=%.1f\n",s[i].marks);

    }
    return 0;
}


