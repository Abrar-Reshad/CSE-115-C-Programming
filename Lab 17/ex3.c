#include<stdio.h>
struct employee
{
    char name[20];
    int day,month,year,salary,d,m,y;
};

int main()
{
    int i;
    struct employee s[4];

    for (i=0;i<4;i++)
    {
        printf("Enter Name= ");
        scanf("%s",&s[i].name);

        printf("Enter Date of Birth= ");
        scanf("%d%d%d",&s[i].day,&s[i].month,&s[i].year);

        printf("Enter Starting Date= ");
        scanf("%d%d%d",&s[i].d,&s[i].m,&s[i].y);

        printf("Enter sallary= ");
        scanf("%d",&s[i].salary);
    }

    int max=s[0].salary,j,p;

    for (i=0;i<4;i++)
    {
        for (j=i+1;j<3;j++)
        {
            if (max<s[j].salary)
            {

                max=s[j].salary;
            }
        }
    }
    printf("Information of Highest paid salary\n\n");


    for (i=0;i<4;i++)
    {
        if (s[i].salary==max)
        {
            printf("Name= ");
            puts(s[i].name);


            printf("\nD.O.B=%d/%d/%d\n",s[i].day,s[i].month,s[i].year);
            printf("starting Date=%d/%d/%d\n",s[i].d,s[i].m,s[i].y);
            printf("Salary=%d",s[i].salary);
        }
    }

return 0;



}

