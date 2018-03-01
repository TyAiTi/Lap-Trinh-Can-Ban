#include <stdio.h>
int main(int argc, char const *argv[])
{
	int month;
	printf("Enter a month (1-12): ");
	scanf("%d", & month);
	switch(month){
		case 1:
		printf("January\n");
		break;
		case 2:
		printf("February\n");
		break;
		case 3:
		printf("March\n");
		break;
		case 4:
		printf("April\n");
		break;
		case 5:
		printf("May\n");
		break;
		case 6:
		printf("Jun\n");
		break;
		case 7:
		printf("July\n");
		break;
	}
	return 0;
}