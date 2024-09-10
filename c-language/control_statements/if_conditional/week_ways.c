#include<stdio.h>
int main()
{
	int day;
	printf("the week days are 1-sunday\n 2-monday\n 3-tuesday\n 4-wensday\n 5-thusday\n 6-friday\n 7-saturday\n");
	printf("choose your day to print:",day);
	scanf("%d",&day);
	switch (day)
	{
		case 1:
			printf("sunday\n");
			break;
		case 2:
			printf("monday\n");
			break;
		case 3:
			printf("tuesday\n");
			break;
		case 4:
			printf("wensday\n");
			break;
		case 5:
			printf("thusday\n");
			break;
		case 6:
			printf("friday\n");
			break;
		case 7:
			printf("saturday\n");
			break;
	default:
			printf("Invalid input!");
                        break;
    }
	return 0;
}
