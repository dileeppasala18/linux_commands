#include<stdio.h>
int main()
{
	int current_units,previous_units,total_units,unit_price,total_price;
	printf("enter the current units is:");
	scanf("%d",&current_units);
	printf("enter the previous units");
	scanf("%d",&previous_units);
	total_units=current_units-previous_units;
	if (total_units<=100)
	{
		unit_price =3;
	}
	else if (total_units<=150)
	{
		unit_price=5;
	}
	else if (total_units<=200)
	{
		unit_price=7;
	}
	else
	{
		unit_price=9;
	}
	printf("total consumed units is %d\n",total_units);
	total_price=total_units * unit_price;
	printf("total price is %d\n",total_price);
	return 0;
}
