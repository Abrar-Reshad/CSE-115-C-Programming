#include<stdio.h>
struct employee
{
    char name[20];
    struct dob{
    int day,month,year;
    }g[4];
    struct sdate{
    int d,m,y;
    }k[4];
    int salary;
};

int main()
{
    int i;
    struct employee s[4];

    for (i=0;i<4;i++)
    {
        printf("Enter Name= ");
        scanf("%s",&s[i].name);
        fflush(stdin);
        printf("Enter Date of Birth= ");
        scanf("%d%d%d",&s[i].g[i].day,&s[i].g[i].month,&s[i].g[i].year);
        fflush(stdin);
        printf("Enter Starting Date= ");
        scanf("%d%d%d",&s[i].k[i].d,&s[i].k[i].m,&s[i].k[i].y);
        fflush(stdin);
        printf("Enter sallary= ");
        scanf("%d",&s[i].salary);
        fflush(stdin);
    }
    int j,p;
    int sd=s[0].k[0].d,sm=s[0].k[0].m,sy=s[0].k[0].y;
    for (i=0;i<4;i++)
    {
        for (j=i+1;j<4;j++)
        {
            if (sy<s[j].k[j].y)
            {
                sy=s[j].k[j].y;
                p=j;
            }
            if (s[i].k[i].y==s[j].k[j].y)
            {
                if (sm <s[j].k[j].m)
                {
                    sm=s[j].k[j].m;
                    p=j;
                }
                if (s[i].k[i].m==s[j].k[j].m)
                {
                    if (sd<s[j].k[j].d)
                    {
                        sd=s[j].k[j].d;
                        p=j;
                    }

                }
            }


        }
    }
    printf("Recently joined Employee\n\n");

                printf("Name= ");
                puts(s[p].name);
                printf("D.O.B=%d/%d/%d\n",s[p].g[p].day,s[p].g[p].month,s[p].g[p].year);
                printf("starting Date=%d/%d/%d\n",s[p].k[p].d,s[p].k[p].m,s[p].k[p].y);
                printf("Salary=%d",s[p].salary);


       return 0;

}

