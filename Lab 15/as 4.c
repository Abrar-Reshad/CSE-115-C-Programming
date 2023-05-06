#include<stdio.h>

int f(int a[],int s,int n)
{
     int i,j,found=0;

    for (i=0;i<n;i++)
    {
        if (a[i]==s)
            {
                found++;
            }
    }
    if (found==0)
    printf("Not Found");
    else
        printf("%d Apeared=%d times",s,found);

}


int main()
{
    int n;
    printf("Enter n= ");
    scanf("%d",&n);

    int a[n],s,i;

    for (i=0;i<n;i++)
    {
        printf("Enter a[%d] = ",i);
        scanf("%d",&a[i]);

    }


    printf("enter search key= ");
    scanf("%d",&s);

    f(a,s,n);


     return 0;
}



