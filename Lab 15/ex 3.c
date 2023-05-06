#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j;

    printf("Enter size= ");
    scanf("%d",&n);

    char s[n],b[n];

    printf("Enter string= ");
    gets (s);



    for(i = 0; s[i]!=0; i++)
        {
         for (j=0; j<=i; j++)
            {
              if (s[i] == s[j])
              break;
            }
              if (i == j)
        {
              printf("%s ", s[i]);
        }
        }
  
 
 return 0;
}


}
