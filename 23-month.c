/* Write a C program for reading any Month Number and displaying the Month name as a word. Go to the editor
	Test Data :
	4
	Expected Output :
	April
	*/
/*Write a C program for reading any Month Number and displaying the Month name as a word. Go to the editor*/
#include <stdio.h>
int main()
{
	int a;
	printf("Enter the value : ");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("Janury");
		break;
	case 2:
		printf("February");
		break;
	case 3:
		printf("March");
		break;
	case 4:
		printf("April");
		break;
	case 5:
		printf("May");
		break;
	case 6:
		printf("June");
		break;
	case 7:
		printf("July");
		break;
	case 8:
		printf("August");
		break;
	case 9:
		printf("September");
		break;
	case 10:
		printf("October");
		break;
	case 11:
		printf("November");
		break;
	case 12:
		printf("December");
		break;
	default:
		printf("Not a month");
	}
	return 0;
}

/*output:
Enter the value : 3
March*/