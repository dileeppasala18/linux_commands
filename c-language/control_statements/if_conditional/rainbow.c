/* to check rainbow colours */
#include<stdio.h>
int main()
{
	int rainbow;
	printf("the rainbow colours are \n1-voielt\n2-indigo\n3-blue\n4-green\n5-yellow\n6-orange\n7-red\n");
	printf("choose your colour to print:",rainbow);
	scanf("%d",&rainbow);
	switch (rainbow)
	{
		case 1:
			printf("voielt\n");
			break;
		case 2:
			printf("indigo\n");
			break;
		case 3:
			printf("blue\n");
			break;
		case 4:
			printf("green\n");
			break;
		case 5:
			printf("yellow\n");
			break;
		case 6:
			printf("orange\n");
			break;
		case 7:
			printf("red\n");
			break;
	default:
			printf("Invalid input!");
                        break;
    }
	return 0;
}
