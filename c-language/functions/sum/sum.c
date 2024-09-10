/*function with arg and return type */
#include<stdio.h>
int sum(int a,int b)
{
	int x;
	x=a+b;
	return x;
}
int main()
{
	int z;
	z=sum(6,8);
	printf("sum is %d",z);
	return 0;
}

/*function with arguments and without return type*/
#include<stdio.h>
void sum(int a,int b)
{
	int x;
	x=a+b;
	printf("sum is %d",x);
}
int main()
{
	sum(6,8);
	return 0;
}

/*function with out arguments and with return type */
#include<stdio.h>
int sum()
{
	int a,b,c;
	printf("enter the a value");
	scanf("%d",&a);
	printf("enter the b value");
	scanf("%d",&b);
	c=a+b;
	return c;
}
int main()
{
	int e;
	e=sum();
	printf("sum is %d",e);
	return 0;
}

/*function without arguments and with out return type */
#include<stdio.h>
void sum()
{
	int a,b,x;
	printf("enter the a value");
	scanf("%d",&a);
	printf("enter the b value");
	scanf("%d",&b);
	x=a+b;
	printf("sum is %d",x);
}
int main()
{
	sum();
	return 0;
}
