#include<stdio.h>
int main()
{
    int a;
    printf("enter semester= ");
    scanf("%d",&a);
    switch (a){
    case 0 :printf("Invalid semester");break;
    case 1 :printf("freshman ");break;
    case 2 :printf("InvalidF4 ");break;
    case 3 :printf("Invalid F");break;
    case 4 :printf("Invalid semesterS");break;
    case 5 :printf("Invalid semesterS");break;
    case 6 :printf("Invalid semesterS");break;
    case 7 :printf("Invalid semesterJ");break;
    case 8 :printf("Invalid semesterJ");break;
    case 9 :printf("Invalid semesterJ");break;
    case 10:printf("Invalid semesterS");break;
    case 11:printf("Invalid semesterS");break;
    case 12:printf("Invalid semesterS");break;
    default :printf("you must stop");
    }

    return 0;
}
