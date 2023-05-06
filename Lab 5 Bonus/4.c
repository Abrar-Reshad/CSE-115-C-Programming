#include<stdio.h>
int main()
{
    char dir;
    int x,y,b;

    printf("Enter current coordinate (x and y positions): ");
    scanf("%d%d",&x,&y);
    fflush(stdin);
    printf("Enter No. units towards direction: ");
    scanf("%d",&b);
    fflush(stdin);
    printf("Enter Direction: ");
    scanf("%c",&dir);

    if (dir=='N')
    {
        y=y+b;
        x=x;
        printf("new cordinate=(%d,%d)",x,y);
    }
    else if (dir=='S')
    {
        y=y-b;
        x=x;
        printf("new cordinate=(%d,%d)",x,y);
    }
    else if (dir=='E')
    {
        x=x+b;
        y=y;
        printf("new cordinate=(%d,%d)",x,y);
    }
    else if (dir=='W')
    {
        x=x-b;
        y=y;
        printf("new cordinate=(%d,%d)",x,y);
    }

    else
    {
        printf("invalid");
    }

    return 0;
}
