//#function with arg and with return type

#include<stdio.h>
int area_of_rectangle(int l,int b)
{
	int area;
	area=l*b;
	return area;
}
int main()
{
	int z;
	z=area_of_rectangle(6,7);
	printf("area of rectangleis %d",z);
	return 0;
}

#function with out arguments and with return type
#include<stdio.h>
int area_of_rectangle()
{
	int l,b,area;
	printf("enter the length : ");
    scanf("%d",&l);
	printf("enter the breadth : ");
	scanf("%d",&b);
	area=l*b;
	return area;
}
int main()
{
	int z;
	z= area_of_rectangle();
	printf("area of rectangle is %d",z);
	return 0;
}


#fnction with arguments with return type
#include<stdio.h>
void area_of_rectangle(int l,int b)
{
        int area;
        area=l*b;
        printf("area is %d",area);
}
int main()
{
        area_of_rectangle(6,7);
        return 0;
}

/*function without arguments and without return type*/
#include<stdio.h>
void area_of_rectangle()
{
	int l,b,area;
	printf("enter the length : ");
	scanf("%d",&l);
	printf("enter the breadth : ");
	scanf("%d",&b);
	area=l*b;
	printf("area of rectangle is %d",area);
}
int main()
{
	area_of_rectangle();
	return 0;
}
