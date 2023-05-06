#include<stdio.h>
//needs work.
#include<string.h>
struct books{

    char title[100];
    char author[100];
    int id;
    char subject[100];

};

int main()
{
    struct books b[4];
    int i;
    char n[40];

    for (i=0;i<4;i++)
    {
        printf("enter title: ");
        gets(b[i].title);
        printf("enter author: ");
        gets(b[i].author);
        fflush(stdin);
        printf("enter id: ");
        scanf("%d",&b[i].id);
        fflush(stdin);
        printf("Enter subject: ");
        gets(b[i].subject);
        fflush(stdin);

    }

    printf("enter book name you want to search: ");
    gets(n);
    search(b,n);
}

void search(struct books b[],char n[])
{
    int i;

    for (i=0;i<4;i++)
    {
       if (strcmp(n,b[i].title)==0)
       {
           printf("found");
       }

    }
}
