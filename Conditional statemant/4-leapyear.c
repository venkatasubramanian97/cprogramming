#include <stdio.h>
int main()
{
	int year;
	printf("Enter the number : ");
	scanf("%d", &year);
	if (year % 400 == 0)
	{
		printf("%d is a leap year", year);
	}
	else if (year % 100 == 0)
	{
		printf("%d is a not leap year", year);
	}
	else if (year % 4 == 0)
	{
		printf("%d is a leap year", year);
	}
	else
	{
		printf("%d is a not leap year", year);
	}

	return 0;
}

/*output:
Enter the number : 1800
1800 is a not leap year
Enter the number : 23
23 is a not leap year  */