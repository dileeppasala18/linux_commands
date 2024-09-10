#include<stdio.h>
int main()
{
	int n1,n2,result;
	char option;
	printf("enter the first number : ");
	scanf("%d",&n1);
	printf("enter the second number : ");
	scanf("%d",&n2);
	getchar();
	printf("chose the option a=addition\n b=subtraction\n c=multiplication\n d=division\n e=modulo division\n");
	printf("enter the option : ");
	scanf("%c",&option);
	fflush(stdout);
	if(option=='a')
	{
		result=n1+n2;
	}
	else if(option=='b')
	{
		result=n1-n2;
	}
	else if(option=='c')
	{
		result=n1*n2;
	}
	else if(option=='d')
	{
		result=n1/n2;
	}
	else if(option=='e')
	{
		result=n1%n2;
	}
	else
	{
		printf("entered the invalid option");
		return 0;
	}
	printf("the result is %d\n",result);
	return 0;
}
