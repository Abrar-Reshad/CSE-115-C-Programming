//cpmplex add usng functin
#include<stdio.h>
struct complex
{
    float real;
    float img;
};
typedef struct complex complex;

complex add(complex c1, complex c2)
{
    complex sum;
    sum.real=c1.real+c2.real;
    sum.img=c1.img+c2.img;

    return (sum);

}


int main()
{
   complex c1,c2,result;

        printf("enter first real and img part= ");
        scanf("%f%f",&c1.real,&c1.img);
        printf("enter secend real and img part= ");
        scanf("%f%f",&c2.real,&c2.img);

        result= add(c1,c2);

        printf("result is =%.1f+%.1fi",result.real,result.img);


}


