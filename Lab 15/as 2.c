#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter size= ");
    scanf("%d",&n);

    int a[n],o[n],e[n];


    for (i=0;i<n;i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    int p=0,q=0;

    for (i=0;i<n;i++)
    {
        if (a[i]%2==0)
        {
            e[p]=a[i];
            p++;
        }

        else if (a[i]%2!=0)
        {
            o[q]=a[i];
            q++;
        }
    }

    printf("even = \n");
    for (i=0;i<p;i++)
    {
        printf("%d ",e[i]);
    }
    printf("\n");
    printf("Odd = \n");

    for (i=0;i<q;i++)
    {
        printf("%d ",o[i]);
    }

    return 0;




}
