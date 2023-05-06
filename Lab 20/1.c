#include<stdio.h.>
#include<string.h>
struct student
{
    char name[30],gender[20];
    int id;

}s[100];

void add()
{
    FILE* file;
    file=fopen("text.txt","a");

    int i;

    for (i=0; ;i++)
    {
        printf("\n\nEnter Id: ");
        scanf("%d",&s[i].id);
        fflush(stdin);
        fprintf(file,"ID: %d\n",s[i].id);
        printf("Enter Name: ");
        gets(s[i].name);
        fflush(stdin);
        fprintf(file,"Name: %s\n",s[i].name);
        printf("Entet Gender: ");
        gets(s[i].gender);
        fflush(stdin);
        fprintf(file,"Gender: %s\n\n",s[i].gender);

        int p;
        printf("\n\nAnother: \n1 to yes\n2 to no");
        scanf("%d",&p);
        fflush(stdin);
        if (p==1)
        {
            continue;
        }
        else if (p==2)
        {
            fclose(file);
            system("cls");
            main();
        }
    }
}

void read()
{
    system("cls");
    FILE*file;
    file=fopen("text.txt","r");
    char ch;

    while(!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);
    main();

}

void search()
{
    FILE*file;
    file=fopen("text.txt","r");

    int i;
    char d[100],c[50]="ID: ",n[20],g[23];
    printf("Enter id to search: \n\n");
    gets(n);

    strcat(c,n);
    strcat(c,"\n");

   while(!feof(file))
   {
       fgets(d,40,file);
       if (strcmp(d,c)==0)
       {
           fseek(file,-7,SEEK_CUR);
           for (i=0;i<3;i++)
           {
              fgets(g,23,file);
              printf("%s",g);
           }

           break;
       }

   }
    main();
}

void update()
{
    FILE*file;
    file=fopen("text.txt","r+");
    int found=0;
    char d[100],c[50]="ID: ",n[20],g[23],update1[20],update2[20],update3[20];
    printf("Enter id to update: \n\n");
    gets(n);

    strcat(c,n);
    strcat(c,"\n");

    while(!feof(file))
    {
        fgets(d,30,file);
        if(strcmp(d,c)==0)
        {
            printf("Found\n");
            printf("Enter new ID: ");
            gets(update1);
            printf("Entet new Name: ");
            gets(update2);
            printf("Enter new gender: ");
            gets(update3);
            found=1;
            break;
        }
    }
        rewind(file);
        if (found==1)
        {
            while(!feof(file))
            {
                fgets(g,30,file);
                if (strcmp(g,c)==0)
                {
                    printf("found2");
                    fseek(file,-7,SEEK_CUR);

                    fprintf(file,"ID: %s\n",update1);
                    fprintf(file,"Name: %s\n",update2);
                    fprintf(file,"Gender: %s\n",update3);

                    printf("success");

                    break;
                }
            }
        }
        fclose(file);
        main();

}

void erase()
{
    FILE*file,*file2;
    file=fopen("text.txt","r+");
    file2=fopen("temp.txt","w");
    int found=0,i,count=0;
    char d[100],c[50]="ID: ",n[20],g[23],update1[20],update2[20],update3[20];
    printf("Enter id to delete: \n\n");
    gets(n);

    strcat(c,n);
    strcat(c,"\n");

    while(!feof(file))
    {
        fgets(d,30,file);

        if(strcmp(d,c)==0)
        {
            fseek(file,-7,SEEK_CUR);
            for (i=0;i<3;i++)
            {
                fgets(d,20,file);
            }
        }
        else if(strlen(d)>3)
        {
            fputs(d,file2);
            count++;
            if (count==3)
            {
                fputs("\n",file2);
                count=0;
            }
        }
    }

    fclose(file);
    fclose(file2);

    file=fopen("text.txt","w+");
    file2=fopen("temp.txt","r");

    while(!feof(file2))
    {
        fgets(update2,20,file2);
        fputs(update2,file);
    }
    fclose(file);
    fclose(file2);
    file2=fopen("temp.txt","w+");
    fclose(file2);
    main();
}

void erase_all()
{
    FILE*file;
    file=fopen("text.txt","w+");
    fclose(file);
    main();
}



int main()
{

    int num;
    printf("main menu\n");
    printf("Enter\n\n");
    printf("1 to write\n");
    printf("2 to read\n");
    printf("3 to search\n");
    printf("4 to update\n");
    printf("5 to erase\n");
    printf("6 to delete all\n");
    printf("7 to exit\n");


    scanf("%d",&num);
    fflush(stdin);
    if (num==1)
    {
        add();
    }
    else if(num==2)
    {
        read();
    }
    else if(num==3)
    {
        search(s);
    }
    else if(num==4)
    {
        update();
    }
    else if(num==5)
    {
        erase();
    }
    else if(num==6)
    {
        erase_all();
    }
    else if(num==7)
    {
        system("cls");
        return 0;
    }

}
