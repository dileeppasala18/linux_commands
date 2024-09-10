#function with arg with no return value

#include<stdio.h>
void  product(int num1,int num2)
{
	int num3;
	num3=num1*num2;
	printf("the product of %d * %d =%d\n",num1,num2,num3);
}
int main()
{
	int a,b;
	printf("enter the first number:",a);
	scanf("%d",&a);
	printf("enter the second number:",b);
	scanf("%d",&b);
	product(a,b);
	return 0;
}
#function with arg with return type
#include<stdio.h>
int  product(int num1,int num2)
{
	int num3;
	num3=num1*num2;
	return num3;

}
int main()
{
	int mul;
	mul=product(3,6);
	printf("product is  %d ",mul);
	return 0;
}

#function without arg with no return type
#include<stdio.h>
void product()
{
	int num1,num2,result;
	printf("enter the first number:",num1);
	scanf("%d",&num1);
	printf("enter the second number:",num2);
	scanf("%d",&num2);
	result=num1*num2;
	printf("the product of %d * %d = %d\n",num1,num2,result);
}
int main()
{
	product();
	return 0;
}
#function with no arg with return type
#include<stdio.h>
int product()
{
	int num1,num2,result;
	printf("enter the first number:",num1);
	scanf("%d",&num1);
	printf("enter the second number:",num2);
	scanf("%d",&num2);
	result=num1*num2;
	return result;
}
int main()
{
	int mul;
	mul=product();
	printf("the product is %d\n",mul);
	return 0;
}
