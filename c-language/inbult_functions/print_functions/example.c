#include<stdio.h>

int main()
{
    int a=10;
    int b=20;
    int c;
    c=a+b;
    
    printf("The value of a and b is :%d\n",c);
    printf("the address of c is:%u\n",&c);
    printf("the hex addres is:%x\n",&c);
    printf("the octa address is:%ox\n",&c);
    return 0;
}
