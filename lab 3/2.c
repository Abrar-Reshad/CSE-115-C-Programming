#include<stdio.h>
int main()
{
    int i=0x3,num=0x30;
    printf("right shift by %x: %x\n",i,num>>i);
    printf("left shift by %x:%x\n",i,num<<i);
    return 0;
}
